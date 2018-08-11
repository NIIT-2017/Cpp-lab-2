#include <iostream>
#include "task2.h"
#include "task.h"
using namespace std;

int main()
{
	const size_t N = 3;
	double* arr;
	arr = createArr<double, N>(gen);
	for (int i = 0; i < N; i++)
		cout << arr[i] << endl;
	char* arr1;
	arr1 = createArr<char, N>(gen);
	for (int i = 0; i < N; i++)
	{
		cout << arr1[i] << endl;
	}
	char** arr2;
	arr2 = createArr<char*, N>(gen);
	for (int i = 0; i < N; i++)
	{
		cout << arr2[i] << endl;
	}

	delete[] arr;
	delete[] arr1;
	delete[] arr2;
	return 0;
}