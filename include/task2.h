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



