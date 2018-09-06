#include<iostream>
#include "task1.h"
using namespace std;

int main() {
	char* arr1[] = { (char*)"88888123", (char*)"34567", (char*)"8912345", (char*)"656656", (char*)"7" };
	int arr2[] = { 5, 3, 2, 4, 1, 6 };
	double arr3[] = { 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	char arr4[] = { 'i', 's', 'u', 'r', 'r', 'p' };

	msort(arr1, sizeof(arr1) / sizeof(arr1[0]));
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		std::cout << arr1[i] << " ";
	}
	cout << endl;
	msort(arr2, sizeof(arr2) / sizeof(arr2[0]));
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		std::cout << arr2[i] << " ";
	}
	cout << endl;

	msort(arr3, sizeof(arr3) / sizeof(arr3[0]));
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		std::cout << arr3[i] << " ";
	}
	cout << endl;

	msort(arr4, sizeof(arr4) / sizeof(arr4[0]));
	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) {
		std::cout << arr4[i] << " ";
	}
	return 0;
}