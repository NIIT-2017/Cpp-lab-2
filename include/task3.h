#ifndef _TASK3_H_
#define _TASK3_H_

#include <iostream>

template <typename T, size_t N>
void map(T (&values)[N], T (*change)(T))
{
	for(size_t i = 0; i < N; i++)
		values[i] = change(values[i]);
}

#endif