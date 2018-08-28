#include"task.h"

template<typename T>
void map(T *arr, int n, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}
