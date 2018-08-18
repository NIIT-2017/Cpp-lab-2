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

template<class type> type change(type ff)
{
	ff = (type)(rand());
	return ff;
}

template<> char *change(char *str)
{
	size_t dl = strlen(str);

	for (size_t i = 0; i < dl; i++)
	{
		str[i] = (char)(rand());
	}

	return str;
}

