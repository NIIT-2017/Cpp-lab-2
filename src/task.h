#ifndef _TASK_H_
#define _TASK_H_
#include <cstring>
#include<iostream>

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


template<class T> T change(T var) {
	return var*var;
}


template<> char* change(char *var) {
	for (int i = 0; i < strlen(var); i++) {
		var[i] = rand()%('z'-'a'+1)+'a';
	}
	return var;
}

#endif