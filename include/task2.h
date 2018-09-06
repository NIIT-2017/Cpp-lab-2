#ifndef TASK2_H
#define TASK2_H
#include <cstring>
#include<iostream>

template<class T, size_t size> T* createArr(T(*gen)()) {
	T *arr = new T[size];
	T val = 0;
	
	for (size_t i = 0; i < size; i++) 
	{
		val = gen();
		arr[i] = val;
	}

	for (size_t i = 0; i < size; i++) 
	{
		std::cout << arr[i] << " ";
	}

	delete[] arr;
	return arr;
}
#endif		//TASK2_H