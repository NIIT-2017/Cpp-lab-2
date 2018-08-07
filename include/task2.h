#pragma once
#ifndef TASK2_H
#define TASK2_H

template<typename T, size_t n> T* createArr(T(*gen)())
{
	T* b = new T[n];
	for (int i = 0; i < n; i++)
		b[i] = gen();
	return b;
}
#endif