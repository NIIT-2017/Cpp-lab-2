#pragma once
#include <cstring>
#include <cstdlib>
#include <iostream>
template<typename T>
T gen()
{
	T t = (T)(rand());
	return t;
}
template<>
char* gen()
{
	int t = rand() % (15 - 1 + 1) + 1;
	char* s = new char[t];
	for (size_t i = 0; i < t; i++)
		s[i] = (char)(rand());
	s[t] = '\0';
	return s;
}


//template<class T> T change(T a)
//{
//	a = (T)(rand());
//	return a;
//}
//template<> char* change(char* str)
//{
//	size_t n = strlen(str);
//	for (size_t i = 0; i < n; i++)
//		str[i] = (char)(rand());
//	return str;
//}
