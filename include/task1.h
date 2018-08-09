
#pragma once
#include <cstring>

template<typename T>
bool compare(T a, T b)
{
	return a <= b;
}

template<>
bool compare(char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template<typename T>
void merge(T arr[], size_t l, size_t m, size_t r)
{
	size_t i, j, k;
	size_t n1 = m - l + 1;
	size_t n2 = r - m;


	T *L = new T[n1];
	T *R = new T[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];


	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (compare(L[i], R[j]))
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


template<typename T>
void mergeSort(T arr[], size_t l, size_t r)
{
	if (l < r)
	{

		size_t m = l + (r - l) / 2;


		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

template<typename T>
void msort(T *arr, size_t size)
{
	size_t l = 0;
	size_t r = size - 1;
	mergeSort(arr, l, r);
}