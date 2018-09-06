#include<iostream>
#include "task2.h"
#include"task.h"
#define SIZE 7

int main()
{
	int *arr1;
	arr1 = createArr<int, SIZE>(gen);
	for (size_t i = 0; i < SIZE; i++)
		std::cout << arr1[i] << " ";

	char *arr2;
	arr2 = createArr<char, SIZE>(gen);
	for (size_t i = 0; i < SIZE; i++)
		std::cout << arr2[i] << " ";

	char **arr3;
	arr3 = createArr<char*, SIZE>(gen);
	for (size_t i = 0; i < SIZE; i++)
		std::cout << arr3[i] << " ";

	return 0;
}