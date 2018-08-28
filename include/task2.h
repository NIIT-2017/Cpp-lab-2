#ifndef _TASK_H_
#define _TASK_H_

#include"task.h"
template <typename T>
T* createArr(const int N, T(&gen)())
{
	T *arr = new T[N];
	for (int i = 0; i < N; i++)
	arr[i] = gen();

	return arr;
}
#endif
