#include <iostream>
#include <string>
using namespace std;



template <class T, size_t n>
void map(T *arr, T(*change)(T))
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = change(arr[i]);

	}
}


