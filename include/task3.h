#pragma once
#include <cstring>
template<class T>
T changeElement(T val)
{
	return val + 1;
}

template<>
char* changeElement(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<typename T, int n>
void map(T (&arr)[n], T (*changeElement)(T)) {
	 
	for (int i = 0; i < n; i++) {
		arr[i] = changeElement(arr[i]);
	}
	 
}