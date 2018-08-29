
#include "task1.h"
#include <cstddef>


int main()
{
	double arr_double[10] = {5.2, 1.5, 0.1, 3.5, 8.3, 2.1, 6.6, 5.4, 9.98, 10.8};
	int arr_int[10] = {44, 1, -30, 155, 86, 3, 10000, 11, 777, 155 };
	char arr_char[10] = { '0', '9', '5', '1', '8', '3', '7', '4', '2', '6'};
	long long int arr_Long[10] = { 11, 4611686018427387903, 1111, 144115188075855871,111111, 11, 1, 1111111111111111111,1111111111, 1111111110 };
	char * arr_str[10] = { (char*)"555555", (char*)"222", (char*)"9999999999", (char*)"11", (char*)"0", (char*)"3333", (char*)"77777777", (char*)"6666666", (char*)"888888888", (char*)"44444" };

	cout_type_arr(arr_double, 10);
	msort(arr_double, 10);
	cout_type_arr(arr_double, 10);

	cout_type_arr(arr_int, 10);
	msort(arr_int, 10);
	cout_type_arr(arr_int, 10);

	cout_type_arr(arr_char, 10);
	msort(arr_char, 10);
	cout_type_arr(arr_char, 10);

	cout_type_arr(arr_Long, 10);
	msort(arr_Long, 10);
	cout_type_arr(arr_Long, 10);

	cout_type_arr(arr_str, 10);
	msort(arr_str, 10);
	cout_type_arr(arr_str, 10);

	return 0;
}