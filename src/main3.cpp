//Autor is Dmitriy Parev
#include <iostream>
#include "task3.h"
#include "task.h" //вспомогательные функции print, gen, change

int main()
{
	const size_t n = 5;

	int arr[n]{1, 2, 3, 4, 5};
	print(arr, n);
	map<int, n>(arr, change);
	print(arr, n);
	
	double arr2[5]{1, 2.2, 3.3, 4.4, 5};
	print(arr2, n);
	map<double, n>(arr2, change);
	print(arr2, n);

	char arr3[n]{'1', '2', '3', '4', '5'};
	print(arr3, n);
	map<char, n>(arr3, change);
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
	map<char*, n>(arr4, change);
	print(arr4, n);

	for(size_t i = 0; i < n; i++)
		delete[] arr4[i];
	return 0;
}