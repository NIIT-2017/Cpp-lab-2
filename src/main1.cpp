#include "task1.h"
#include <iostream>

int main()
{
	int arr1[]{ 10, 3, 5, 1, 4, 6, 7, 8, 9, 11, 13, 12 };
	const char* arr2[]{ "yahoo", "yandex", "private", "public", "protected", "inline", "static", "template", "class", "typename" };
	msort(arr1, 12);
	for (auto i : arr1)
		std::cout << i << std::endl;
	msort(arr2, 10);
	for (auto i : arr2)
		std::cout << i << std::endl;
	return 0;
}