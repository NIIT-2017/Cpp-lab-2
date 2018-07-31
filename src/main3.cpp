#include "task3.h"
#include <iostream>

int main()
{
	const size_t n = 5;
	double arr[]{ 5., 8., 10., 53., 90. };
	char* str_arr[]{ (char*)"arr", (char*)"char", (char*)"int", (char*)"grow", (char*)"car" };
	double(*x)(double) = change;
	char*(*xx)(char*) = change;
	map<double, n>(arr, x);
	for (auto i : arr)
		std::cout << i << std::endl;
	map<char*, n>(str_arr, xx);
	for (auto i : str_arr)
		std::cout << i << std::endl;
	return 0;

}