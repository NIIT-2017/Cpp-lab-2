#pragma once

#include <cstring>
#include <cstdlib>
#include <iostream>

template<typename type, size_t n>
type* createArr(type(*gen)())
{
	type *arr = new type[n];
	for (size_t i = 0; i < n; i++)
		arr[i] = gen();
	return arr;
}

template<typename type>
type gen()
{
	type result = (type)(rand());
	return result;
}


template<>
char* gen()
{
	int nm = rand() % 8;
	char *arr = new char[nm];

	for (size_t i = 0; i < nm; i++)
	{
		arr[i] = (char)(rand());
	}
		
	arr[nm] = '\0';
	return arr;
}

