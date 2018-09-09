#include <iostream>
#include "header.h"
using namespace std;

int main(void) {
	int n;
	char **F = NULL;

	do {
		cout << "Wprowadz liczbe naturalna n: ";
		cin >> n;
	} while (n < 1);
	cout << endl;

	F = fibonacci(n);
	cout << "Oto ciag " << n << " slow Fibonacciego:" << endl;

	for (int i = 0; i < n; i++) {
		cout << "F[" << i + 1 << "] = " << *(F + i) << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		delete[] * (F + i);
	}

	delete[] F;
	F = NULL;

	return 0;
}