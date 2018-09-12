#ifndef TASK2_H
#define TASK2_H
#include <cstring>

template<class T, size_t size> T* createArr(T(*gen)()) 
{
	T *arr = new T[size];
	T val = 0;

	for (size_t i = 0; i < size; i++)
	{
		val = gen();
		arr[i] = val;
	}
	return arr;
}
#endif		//TASK2_H