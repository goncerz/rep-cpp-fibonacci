#include <iostream>
#include <cstring>

char** fibonacci(int n) {
	char** F = NULL;
	F = new char*[n];

	char word1[] = "b";
	char word2[] = "a";

	*F = new char[strlen(word1) + 1];
	for (int j = 0; j < strlen(word1) + 1; j++) {
		*(*F + j) = *(word1 + j);
	}

	if (n > 1) {
		*(F + 1) = new char[strlen(word2) + 1];
		for (int j = 0; j < strlen(word2) + 1; j++) {
			*(*(F + 1) + j) = *(word2 + j);
		}
	}

	if (n > 2) {
		for (int i = 2; i < n; i++) {
			*(F + i) = new char[strlen(*(F + i - 1)) + strlen(*(F + i - 2)) + 1];
			for (int j = 0; j < strlen(*(F + i - 1)) + strlen(*(F + i - 2)) + 1; j++) {
				if (j < strlen(*(F + i - 1))) {
					*(*(F + i) + j) = *(*(F + i - 1) + j);
				}
				else {
					*(*(F + i) + j) = *(*(F + i - 2) + j - strlen(*(F + i - 1)));
				}
			}
		}
	}

	return F;
}