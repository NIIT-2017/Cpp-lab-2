#pragma once
#include <cstring>
#include <cstdlib>
#include <iostream>

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