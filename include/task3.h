#ifndef _TASK3_H_
#define _TASK3_H_

#include"task.h"

template<typename T>
void map(T *arr, int n, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}
#endif
