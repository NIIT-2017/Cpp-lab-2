//Autor is Dmitriy Parev
#include <iostream>
#include "task2.h"
#include "task.h" //вспомогательные функции print, gen, change

int main()
{
	const size_t n = 5;

	int* arr;
	arr = createArr<int, n>(gen);
	print(arr, n);
	
	char* arr2;
	arr2 = createArr<char, n>(gen);
	print(arr2, n);

	char** arr3;
	arr3 = createArr<char*, n>(gen);
	print(arr3, n);

	delete[] arr;
	delete[] arr2;
	for(size_t i = 0; i < n; i++)
		delete[] arr3[i];
	delete[] arr3;
	return 0;
}