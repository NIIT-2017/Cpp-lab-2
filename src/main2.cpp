#include <iostream>
#include "task2.h"
#include "task.h"
using namespace std;


int main()
{
	int* arr = new int[10];
	int* arr1 = createArr<int, 5>(gen);
	for (int i = 0; i < 5; i++)
		cout << arr1[i] << " ";
	cout << endl;
	char* arr2 = createArr<char, 5>(gen);
	for (int i = 0; i < 5; i++)
		cout << arr2[i] << " ";
	cout << endl;
    return 0;
}

