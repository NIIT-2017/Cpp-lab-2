#include <iostream>
#include "task3.h"
#include "task.h" // print()

int main()
{
	const size_t n = 6;

	int arr[n]{51, 33, 555, 13, 99, 0};
	print(arr, n);
	map <int, n> (arr, change);
	print(arr, n);
	
	double arr2[n]{-1, 23.41, 954.2, 6, 95, 11.1};
	print(arr2, n);
	map <double, n> (arr2, change);
	print(arr2, n);

	char arr3[n]{'aaa', 'qwerty', 'zxcvggg', '4d1', '9', 'z'};
	print(arr3, n);
	map <char, n> (arr3, change);
	print(arr3, n);

	char* arr4[n];
	for(size_t i = 0; i < n; i++)
	{
		arr4[i] = new char[i + 2];
		for(size_t j = 0; j < i + 1; j++)
			arr4[i][j] = '0' + i;
		arr4[i][i + 1] = '\0';
	}
	print(arr4, n);
	map <char*, n> (arr4, change);
	print(arr4, n);

	for(size_t i = 0; i < n; i++)
		delete[] arr4[i];
	return 0;
}