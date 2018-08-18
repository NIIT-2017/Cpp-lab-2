#pragma once
#include <cstring>

template<typename type>
type value(type &a)
{
	type result = a;
	return result;
}

int value(char* a)
{
	int result = strlen(a);
	return result;
}

template<typename type>
void copy(type &arr1, type &arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
}

template<typename type>
void merge(type &arr1, type &arr2, int size, int fc)
{
	int p1, p2, p3 = 0, max1, max2;

	for (int i = 0; i < size; i = i + (fc * 2))
	{
		if (fc >= size - 1) return;

		max1 = i + fc - 1;
		max2 = i + (fc * 2) - 1;

		p1 = i;
		p2 = i + fc;
		if (max2 > size - 1) max2 = size - 1;
		if (p2 > size - 1) p2 = size - 1;

		while (p1 <= max1 || p2 <= max2)
		{
			if (p3 > size - 1) break;

			if (value(arr1[p1]) <= value(arr1[p2]) && p1 <= max1 && p2 <= max2)
			{
				arr2[p3] = arr1[p1];
				p1++;
				p3++;
				continue;
			}

			if (value(arr1[p1]) >= value(arr1[p2]) && p1 <= max1 && p2 <= max2)
			{
				arr2[p3] = arr1[p2];
				p2++;
				p3++;
				continue;
			}

			if (p1 > max1 && p2 <= max2)
			{
				arr2[p3] = arr1[p2];
				p2++;
				p3++;
				continue;
			}

			if (p2 > max2 && p1 <= max1)
			{
				arr2[p3] = arr1[p1];
				p1++;
				p3++;
				continue;
			}
		}
	}
}

template<typename type>
void msort(type *arr, int size)
{
	int fc = 1;
	type *arr1, *arr2;
	arr1 = new type[size];
	arr2 = new type[size];

	copy(arr1, arr, size);

	while (fc <= size)
	{
		if (fc>1) copy(arr1, arr2, size);

		merge(arr1, arr2, size, fc);

		fc = fc * 2;
	}

	copy(arr, arr2, size);

	delete[] arr1;
	delete[] arr2;
}