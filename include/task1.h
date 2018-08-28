#include <iostream>
template<typename Type>
void MergeSort(Type *A, int first, int last);

template<typename Type>
void MergeSort(Type *A, int first, int last)
{
	{
		if (first<last)
		{
			MergeSort(A, first, (first + last) / 2);
			MergeSort(A, (first + last) / 2 + 1, last);
			Merge(A, first, last); 
		}
	}
};

template<typename Type>
void Merge(Type *A, int first, int last)
{
	int middle, start, final, j;
	Type *mas = new Type[100];
	middle = (first + last) / 2;
	start = first;
	final = middle + 1;
	for (j = first; j <= last; j++)
	{
		if ((start <= middle) && ((final > last) || A[start] < A[final]))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}

	}
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};

void Merge(char **A, int first, int last)
{
	int middle, start, final, j;
	char **mas = new char*[100];
	middle = (first + last) / 2;
	start = first;
	final = middle + 1;
	for (j = first; j <= last; j++)
	{
		if ((start <= middle) && ((final > last) || strlen(A[start]) < strlen(A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}

	}
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};
