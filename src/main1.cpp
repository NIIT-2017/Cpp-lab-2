#include <iostream>
#include "task1.h"


int main()
{
	const size_t N = 8;
	int arr1[N] = { 1, 2, 3, 5, 2, 0, 8, 7 };
	msort(arr1, N);

	const size_t M = 7;
	double arr2[M] = { 1.1, 2.3, 3.1, 5.0, 2.1, 8.1, -7 };
	msort(arr2, M);

	const size_t P = 7;
	char arr3[P] = { 'b', 'a', 'l', 'k', 'z', '8', 'o' };
	msort(arr3, P);

	const size_t K = 6;
	char* val[K]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
	msort(val, K);

	return 0;
}