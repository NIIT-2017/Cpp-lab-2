#include <iostream>
#include "task2.h"


template<class T>
T gen()
{
	return rand() % 10;
}


char* gen()
{
	int t = rand() % 10;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}


int main()
{
	std::srand(std::time(nullptr));

	const size_t N = 10;
	int* arr;
	arr = createArr<int, N>(gen);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}