#include "task3.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const size_t n = 7;
	int arr1[n]{ 1, 2, 3, 4, 5, 6, 7};
	char arr2[n]{ '1', '2', '3', '4', '5', '6', '7'};

	map<int, n>(arr1, change);

	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << endl;
	}

	cout << endl;

	map<char, n>(arr2, change);

	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << endl;
	}
		
	return 0;
}