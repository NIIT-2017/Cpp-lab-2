#include <iostream>
#include "task1.h"
#include <string>
using namespace std;
int main()
{
	int arr1[]{ 10, 3, 5, 1, 4, 6, 7, 8, 9, 11, 13, 12 };
	 char* arr2[]{ (char*)"yahoo", ( char*)"yandex", ( char*)"private", ( char*)"public", ( char*)"protected", ( char*)"inline", ( char*)"static", ( char*)"template", ( char*)"class", ( char*)"typename" };
	msort(arr1, 12);
	for (auto i : arr1)
		std::cout << i << std::endl;
	msort(arr2, 10);
 	for (auto i : arr2)
		std::cout << i << std::endl;
	return 0;
}