//Autor is Dmitriy Parev
#ifndef _TASK2_H_
#define _TASK2_H_

#include <iostream>

template<class T, size_t N>
T* createArr(T (*gen)())
{
	T* arr = new T[N];
	
	for(size_t i = 0; i < N; i++)
		arr[i] = gen();
	return arr;
}

#endif