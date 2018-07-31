#include <iostream>
#include "task2.h"

int main()
{
	const size_t n = 5;
	int(*x)(void);
	x = gen;
	int * arr1 = createArr<int, n>(x);
	for (size_t i = 0; i < n; i++)
		std::cout << arr1[i] << std::endl;
	char*(*xx)(void);
	xx = gen;
	char ** arr2 = createArr<char*, n>(xx);
	for (size_t i = 0; i < n; i++)
		std::cout << arr2[i] << std::endl;
	return 0;

}