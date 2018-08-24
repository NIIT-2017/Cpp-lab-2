#include "task2.h"



int main()
{
	const size_t n = 5;

	char* arr = createArr<char, n>(gen1);
	cout_type_arr_task2(arr, n);

	char** arr1 = createArr<char*, n>(gen1);
	cout_type_arr_task2(arr1, n);

	delete[] arr;
	delete[] arr1;
}


