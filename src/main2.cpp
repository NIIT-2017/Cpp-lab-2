#include <iostream>
#include "task2.h"
#include "task.h"  // gen, change

int main()
{
	const size_t N = 10;
	int* arr;
	arr = createArr<int, N>(gen);
	return 0;
}