#ifndef _TASK1_H_
#define _TASK1_H_
#include <cstring>
#include<cstddef>
#include<iostream>

template <typename T> bool cmp(T lower, T upper) {
	return lower < upper;
}
template<> bool cmp(char* lower, char* upper) {
	return strlen(lower) < strlen(upper);
}
template <typename T> void merge(T & array, T  tempBuf, size_t left, size_t middle, size_t right)
{
	int size = sizeof(array) / sizeof(array[0]);
	int tmp = 0, lower = left, upper = middle + 1;

	while (lower <= middle && upper <= right)
	{
		if (cmp(array[lower],array[upper]))
		{
			tempBuf[tmp] = array[lower];
			tmp++;
			lower++;
		}
		else
		{
			tempBuf[tmp] = array[upper];
			tmp++;
			upper++;
		}
	}

	if (lower <= middle)
	{
		for (; lower <= middle; tempBuf[tmp] = array[lower], tmp++, lower++);
	}
	else
	{
		for (; upper <= right; tempBuf[tmp] = array[upper], tmp++, upper++);
	}

	int arrayPointer = left;
	for (tmp = 0; arrayPointer <= right; array[arrayPointer] = tempBuf[tmp], arrayPointer++,tmp++);
}
template <typename T> void mergeSortHalf(T  array, T  tempBuf, int left, int right)
{
	if (left == right)
	{
		return;
	}

	int middle = (left + right) / 2;

	mergeSortHalf(array, tempBuf, left, middle);
	mergeSortHalf(array, tempBuf, middle + 1, right);

	merge(array, tempBuf,left, middle, right);
}

template <typename T> void msort(T* array, size_t sizeOfArr)
{
	size_t head = 0;
	size_t tail = sizeOfArr - 1;
	T *tempBuf = new T[sizeOfArr];
	
	mergeSortHalf(array, tempBuf, 0, tail);
	
	for (int i = 0; i < sizeOfArr;i++) {
		std::cout << array[i] << " ";
	}

	delete[] tempBuf;
	tempBuf = nullptr;

}
#endif