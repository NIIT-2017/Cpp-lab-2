#include <iostream>
#include <string>
using namespace std;

template <typename T>
void msort(T *arr, int n)
{

	Sort(arr, 0, n-1);

}

template <typename T>
void Sort(T *arr, int first, int last)
{

	if (first < last)
	{
		Sort(arr, first, (first + last) / 2);
		Sort(arr, (first + last) / 2+1, last);
		Merge(arr, first, last);
		
	}
	return;
}


template <typename T>
void Merge(T *arr, int first, int last)
{
	int mid, start, fin;
	T *mas = new T[100];
	mid = (first + last) / 2;
	start = first;
	fin = mid + 1;
	for (int j = first; j <= last; j++)
	{
		
		if ((start <= mid) && ((fin > last) || sravn(arr[start],arr[fin])))
		{
			mas[j] = arr[start];
			start++;
		}
		else
		{
			mas[j] = arr[fin];
			fin++;
		}
	}
	for (int j = first; j <= last; j++)
		arr[j] = mas[j];
	delete[]mas;
}

template <typename T>
bool sravn(T a, T b)
{
	return a < b;
}

template <>
bool sravn(char* a, char* b)
{
	return strlen(a) < strlen(b);
}