
#include "task3.h"

int main()
{
	const size_t n = 5;
	int arr[n]{ 1, 2, 3, 4, 5};
	map<int, n>(arr,change);
	cout_type_arr_task3(arr, n);

	double arr1[n]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr1, change);
	cout_type_arr_task3(arr1, n);

	char arr2[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr2, change);
	cout_type_arr_task3(arr2, n);

	char* arr3[n];
	for (size_t i = 0; i < n; i++)
	{
		arr3[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			arr3[i][j] = '0' + i;
		}
		arr3[i][i + 1] = '\0';
	}
	map<char*, n>(arr3, change);
	cout_type_arr_task3(arr3, n);

	return 0;
}