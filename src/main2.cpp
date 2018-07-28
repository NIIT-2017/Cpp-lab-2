#include <iostream>
#include <cstdlib>
#include "task2.h"

using namespace std;

double gen()
{
	return rand();
}

int main()
{
	int N = 5;
	double arr[5];
	createArr(arr, N, gen);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	return 0;
}