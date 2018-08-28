#ifndef _TASK2_H_
#define _TASK2_H_

template <typename T, int N>
T* createArr(T (*gen)())
{
	T *arr = new T[N];
	for (int i = 0; i < N; i++)
	arr[i] = gen();

	return arr;
}
#endif
