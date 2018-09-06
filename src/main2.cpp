#include<iostream>
#include "task2.h"
#include"task.h"
#define SIZE 7

int main() 
{
	int *arr1;
	arr1 = createArr<int, SIZE>(gen);
	std::cout << std::endl;

	char *arr2;
	arr2 = createArr<char, SIZE>(gen);
	std::cout << std::endl;

	char **arr3;
	arr3 = createArr<char*, SIZE>(gen);
	std::cout << std::endl;

	return 0;
}