#include <iostream>
#include "task2.h"
#include "task.h"
using namespace std;
int main()
{
	const size_t n = 5;
	auto* a = createArr<int, n>(gen);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	delete[] a;
	char** arr;
	arr = createArr<char*, n>(gen);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}

