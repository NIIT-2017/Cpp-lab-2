#pragma once
#include <cstring>
#include <iostream>
/*template<typename T>
T gen()
{
	T t = (T)(rand());
	return t;
}
template<>
char* gen()
{
	int t = rand()%(15-1+1)+1;
	char* s = new char[t];
	for (size_t i = 0; i < t; i++)
		 s[i] = (char)(rand());
	s[t] = '\0';
	return s;
}*/
template<typename T, size_t N>
T* createArr(T(*gen)())
{
	T*arr = new T[N];
	for (size_t i = 0; i < N; i++)
		arr[i] = gen();
	return arr;
}
