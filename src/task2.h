#ifndef _TASK2_H_
#define _TASK2_H_
#include <cstring>
#include<iostream>

template<class T, size_t size> T* createArr(T(*gen)()) {
	T *arr = new T[size];
	T val = 0;
	val=gen();
	for (size_t i = 0; i < size; i++) {
		arr[i] = val;
	}

	for (size_t i = 0; i < size; i++) {
		
		std::cout<< arr[i] << " "<<std::endl;
	}

	delete[] arr;
	return arr;
}



#endif