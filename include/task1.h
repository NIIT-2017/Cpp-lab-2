#pragma once

#include <iostream>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <map>

using namespace std;

// сравнение
template<class T1>
bool comp(T1 a, T1 b)
{
	return a > b;
}

template<>
bool comp(char * a, char * b)
{
	return strlen(a) > strlen(b);
}


//функция, сливающая массивы
template<class T1>
void Merge(T1 * arr, size_t first, size_t last)
{
	//вычисление среднего элемента
	size_t middle = (first + last) / 2; 
	if (first >= last || middle < first || middle > last) 
		return;
	if (last == first + 1 && comp(arr[first], arr[last]))
	{
		T1 tmp = arr[first];
		arr[first] = arr[last];
		arr[last] = tmp;
		return;
	}

	T1 *mas = new T1[last - first + 1];

	size_t i, j, k;

	for (i = 0; i < last - first + 1; i++)
	{
		mas[i] = arr[i + first];
	}

	for (i = first, j = 0, k = middle - first + 1; i <= last; ++i) 
	{
		if (j > middle - first)
		{
			arr[i] = mas[k++];
		}
		else if (k > last - first) 
		{
			arr[i] = mas[j++];
		}
		else 
		{
			arr[i] = (!comp(mas[j], mas[k])) ? mas[j++] : mas[k++];
		}
	}
	delete[]mas;
};

//рекурсивная процедура сортировки
template<class T1>
void MergeSort(T1 * arr, size_t first, size_t last)
{
		if (first < last)
		{
			//сортировка левой части
			MergeSort(arr, first, (first + last) / 2); 
			//сортировка правой части
			MergeSort(arr, (first + last) / 2 + 1, last); 
			//слияние двух частей
			Merge(arr, first, last); 
		}
}

// T & arr - массив
// size_t n - количество элементов массива
template<class T1>
void msort(T1 * arr, size_t n)
{
	MergeSort(arr, (size_t)0, n - 1);
}


template<class T1>
void cout_type_arr(T1 * arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
		cout << arr[i] << endl;
	cout << endl;
}
