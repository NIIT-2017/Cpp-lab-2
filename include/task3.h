#ifndef _TASK3_H_
#define _TASK3_H_
#include <iostream>
using namespace std;


template <typename T, size_t N>
void map(T(&arr)[N], T(*change)(T)){
	for (size_t i = 0; i < N; i++){
		arr[i] = change(i);
	}
}

#endif