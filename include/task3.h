#ifndef TASK3_H
#define TASK3_H

template <class T, size_t N> void map(T(&arr)[N], T(*change)(T))
{
	for (int i = 0; i < N; i++) 
		arr[i] = change(arr[i]);
}
#endif		//TASK3_H