#ifndef TASK1_H
#define TASK1_H
#include <cstring>
#include<cstddef>
#include<iostream>

template <typename T> bool cmp(T lower, T upper) {
	return lower < upper;
}
template<> bool cmp(char* lower, char* upper) {
	return strlen(lower) < strlen(upper);
}

template <typename T> void merge(T & arr, T  temp, size_t left, size_t middle, size_t right)
{
	int size = sizeof(arr) / sizeof(arr[0]);
	int tmp = 0;
	int l = left;
	int r = middle + 1;

	while (l <= middle && r <= right)
	{
		if (cmp(arr[l], arr[r]))
			temp[tmp++] = arr[l++];
		else
			temp[tmp++] = arr[r++];
	}

	if (l <= middle)
	{
		while (l <= middle)
		{
			temp[tmp] = arr[l];
			tmp++;
			l++;
		}
	}
	else
	{
		while (r <= right)
		{
			temp[tmp] = arr[r];
			tmp++;
			r++;
		}
	}
	tmp = 0;
	for (int i = left; i <= right; i++)
	{
		arr[i] = temp[tmp++];
	}
}
template <typename T> void Sort(T arr, T  temp, int left, int right)
{
	if (left == right)
		return;

	int middle = (left + right) / 2;
	Sort(arr, temp, left, middle);
	Sort(arr, temp, middle + 1, right);


	merge(arr, temp, left, middle, right);
}

template <typename T> void msort(T* arr, size_t size)
{
	T *temp = new T[size];
	Sort(arr, temp, 0, size - 1);
	delete[] temp;
}
#endif	//TASK1_H