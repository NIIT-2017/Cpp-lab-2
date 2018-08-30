#include<iostream>
#include "task1.h"
using namespace std;

int main() {
	char* arr1[] = { (char*)"88888123",(char*)"34567",(char*)"8912345",(char*)"656656",(char*)"7" };
	int arr2[] = { 1,88,77,4,100,99,12 };
	double arr3[] = { 1.09,22.3,22.01,4.7,66.2,66.1 };
	char arr4[] = { 'z','d','a','u','b','i' };

	msort(arr1, sizeof(arr1) / sizeof(arr1[0]));
	cout << endl;
	msort(arr2, sizeof(arr2) / sizeof(arr2[0]));
	cout << endl;
	msort(arr3, sizeof(arr3) / sizeof(arr3[0]));
	cout << endl;
	msort(arr4, sizeof(arr4) / sizeof(arr4[0]));

	return 0;
}