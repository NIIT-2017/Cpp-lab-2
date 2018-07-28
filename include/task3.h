#ifndef _TASK_3_H_
#define _TASK_3_H_

template <typename T> void map(T arr[], int N, T(*change)(T))
{
	for (int i = 0; i < N; i++)
		arr[i] = change(arr[i]);
}

#endif