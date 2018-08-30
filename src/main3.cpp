
#include <iostream>
#include<cstring>
#include "task3.h"

int main() {
	const size_t N = 9;
	int arr[N] ={ 1,2,3,4,5,6,7,8,9 };
	double arr1[N] = { 1.01,2.2,3.5,4.1,5.8,6.8,7.9,8.01,9.03 };
	char arr2[N] = { '1','2','3','4','5','6','7','8','9' };
	char* arr3[N] = { (char*)"a",(char*)"b",(char*)"c",(char*)"d",(char*)"e",(char*)"f",(char*)"g",(char*)"h",(char*)"i" };

	map<int, N >(arr, change<int>);
	for (auto i : arr)
		std::cout << i<<" ";
	std::cout <<std:: endl;
	map<double, N>(arr1, change<double>);
	for (auto i : arr1)
		std::cout << i<<" ";
	std::cout << std::endl;
	map<char, N>(arr2, change<char>);
	for (auto i : arr2)
		std::cout << i<<" ";
	std::cout << std::endl;
	
	for (int i = 0; i < N; i++) {
		arr3[i] = new char[i + 2];
		for (int j = 0; j < i + 1; j++) {
			arr3[i][j] = '0' + j;
		}
		arr3[i][i + 1] = '\0';
	}
	map<char*, N>(arr3, change<char*>);
	for (int i = 0; i < N; i++) {
		std::cout << arr3[i] << " ";
	}

	for (int i = 0; i < N; i++) {
		delete[]arr3[i];
	}
	
	return 0;
}