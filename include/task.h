#ifndef _TASK_H_
#define _TASK_H_

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
void print(T *value, size_t n)
{
	for(size_t i = 0; i < n; i++)
		cout << value[i] << " ";
	cout << endl;
}

template <typename T>
T gen()
{
	static int t = 48;
	return t++;
}

template <>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];
	
	for(size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template <typename T>
T change(T value)
{
	return value + 1;
}

template <>
char* change(char* value)
{
	size_t n = strlen(value);
	for(size_t i = 0; i < n; i++)
		value[i] = value[i] + 1;
	return value;
}

#endif