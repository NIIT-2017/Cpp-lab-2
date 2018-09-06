#include <iostream>
#include<cstring>
#include "task3.h"
#include"task.h"

int main() 
{
	
	const size_t n = 5;
	int arr[n]{1, 2, 3, 4, 5};
	map<int, n>(arr, change);
	for (auto i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	double arr2[5]{1, 2.2, 3.3, 4.4, 5};
	map<double, n>(arr2, change);

	for (auto i : arr2)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}