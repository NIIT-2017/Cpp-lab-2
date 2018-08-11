#pragma once
#include <cstring>
#include <cstdlib>

template<class T> 
T change(T a)
{
	a = (T)(rand());
	return a;
}
template<> char* change(char* str)
{
	size_t n = strlen(str);
	for (size_t i = 0; i < n; i++)
		str[i] = (char)(rand());
	return str;
}
template<class T, size_t n>

void map(T*a, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		a[i] = change(a[i]);
}