#pragma once

#include <cstring>
#include <cstdlib>
#include <iostream>

template<class type, size_t n>
void map(type *ff, type(*change)(type))
{
	for (int i = 0; i < n; i++)
	{
		ff[i] = change(ff[i]);
	}
}



