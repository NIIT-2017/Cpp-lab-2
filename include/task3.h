#ifndef _TASK3_H_
#define _TASK3_H_


template<typename T, int n>
void map(T(&arr)[n], T(*change)(T))
{
	for (int i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}
#endif
