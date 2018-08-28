#include<iostream>
#include"task2.h"
#include <cstdlib>
#include<time.h>
using namespace std;

int main()
{
	const int n = 5;
	srand(time(0));
	int* arr;
	int v = gen<int>();

	int* arr1 = createArr <int>(n, gen);

	double* arr2 = createArr <double>(n, gen);

	float* arr3 = createArr <float>(n, gen);

	char* arr4 = createArr <char>(n, gen);

	char** arr5 = createArr <char *>(n, gen);

	bool* arr6 = createArr <bool>(n, gen);

	for (int i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr3[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr4[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr5[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << arr6[i] << " ";
	cout << endl;

	delete[] arr1;
	delete[] arr2;
	delete[] arr3;
	delete[] arr4;
	delete[] arr5;
	delete[] arr6;
	return 0;
}