#include<iostream>
#include"task3.h"

using namespace std;

int main()
{
	const int n = 6;
	int arr1[n] = {1,2,3,4,5,6};
	double arr2[n] = { 1.2, 4.3, 2.5, 3.7, 2.5, 3.3 };
	float arr3[n] = { 1.2, 4.3, 2.5, 3.7, 2.5, 3.3 };
	char arr4[n] = { 'a','b','c','d','e','f'};
	char *arr5[n];
	for (int i = 0; i < n; i++)
	{
		arr5[i] = new char[i + 2];
		for (int j = 0; j < i + 1; j++)
			arr5[i][j] = 'a' + i;
		arr5[i][i + 1] = '\0';
	}
	map<int>(arr1, n, change);
	for (int i = 0; i < 6; i++)
		cout << arr1[i] << " ";
	cout << endl;
	map<double>(arr2, n, change);
	for (int i = 0; i < 6; i++)
		cout << arr3[i] << " ";
	cout << endl;
	map<float>(arr3, n, change);
	for (int i = 0; i < 6; i++)
		cout << arr3[i] << " ";
	cout << endl;
	map<char>(arr4, n, change);
	for (int i = 0; i < 6; i++)
		cout << arr4[i] << " ";
	cout << endl;
	map<char *>(arr5, n, change);
	for (int i = 0; i < 6; i++)
		cout << arr5[i] << " ";
	cout << endl;
	return 0;
}
