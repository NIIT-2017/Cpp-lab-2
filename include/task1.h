#include <cstring>
bool compare( char* a,  char* b)
{
	return strlen(a) < strlen(b);
}
template<class T>
bool compare(T a, T b)
{
	return a < b;
}



//функция, сливающая массивы
template<typename T>
void Merge(T *A, int first, int last)
{

	int mid, begin, end, j;


	T *mas = new T[last + 1];
	
	mid = (first + last) / 2; //вычисление среднего элемента
	begin = first; //начало левой части
	end = mid + 1; //начало правой части
	for (j = first; j <= last; j++)
	{

		if ((begin <= mid) && ((end > last) || (compare(A[begin], A[end]))))
		{
			mas[j] = A[begin];
			begin++;
		}
		else
		{
			mas[j] = A[end];
			end++;
		}
	}
	//возвращение результата в список
	for (j = first; j <= last; j++)
	{
		A[j] = mas[j];
	}
	delete[]mas;
}



//рекурсивная процедура сортировки
template<typename T>
void MergeSort(T *A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2); //сортировка левой части
			MergeSort(A,(first + last) / 2 + 1, last); //сортировка правой части
			Merge(A, first, last); //слияние двух частей
		}
	}
}
template<typename T>
void msort(T *arr, size_t size)
{
	int first = 0;
	int last = size - 1;
//	T*mas = new T[last + 1];
	MergeSort(arr, first, last);
//	delete[]mas;
}