#pragma once
#include <cstring>
#include <iostream>

using namespace std;


template<class T1, size_t N>
void map(T1 * arr, T1 (*change)(T1))
{
	for (size_t i = 0; i < N; i++)
		arr[i] = change(arr[i]);
}

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}


template<class T1>
void cout_type_arr_task3(T1 * arr, size_t n)
{
	/*for (size_t i = 0; i < n; i++)
		cout << arr[i] << endl;
	cout << endl;*/
}