#include <iostream>
#include "task2.h"
using namespace std;
int main()
{
	const size_t n = 7;
	double *arr1;
	char *arr2, **arr3;


	arr1 = createArr<double, n>(gen);
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << endl;
	}
		
	arr2 = createArr<char, n>(gen);
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << endl;
	}

	arr3 = createArr<char*, n>(gen);
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << endl;
	}

	delete[] arr1;
	delete[] arr2;
	delete[] arr3;

	return 0;
}