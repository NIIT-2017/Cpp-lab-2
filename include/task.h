#ifndef TASK_H
#define TASK_H
#include <cstring>
#include<iostream>

template<class T> T gen() {
	static int t = 48;
	return t++;
}

template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}


template<class T> T change(T var) {
	return var + 1;
}


template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

#endif	//TASK_H