#include <iostream>
#include "task3.h"

using namespace std;

double sqr(double x)
{
	return x * x;
}

int mod2(int x)
{
	return x % 2;
}

int main()
{
	double arr[]{1, 2, 3, 4, 5};
	map(arr, 5, sqr);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	int arr2[]{1, 2, 3, 4, 5};
	map(arr2, 5, mod2);
	for (auto x : arr2)
		cout << x << " ";
	cout << endl;
	return 0;
}