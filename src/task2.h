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


template<class T> T gen() {
	T v = '0';

	return v;

}
template<> char* gen() {
	size_t size = 10;
	char* arr = new char[size+1];
	memset(arr, 0, size+1);
	for (size_t i = 0; i <size; i++) {
		arr[i] = i + '0';
	}
	return arr;

}