#ifndef _TASK_2_H_
#define _TASK_2_H_

template <typename T> void createArr(T arr[], int N, T(*gen)())
{
	arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = gen();
}

#endif