#include <iostream>
#include "task1.h"
#include <string>
using namespace std;


int main()
{
	char* arr1[]{ (char*)"ffffff",(char*)"aa",(char*)"aaaa",(char*)"aaaa",(char*)"aaa" };
	int arr2[]{ 1,9,3,2,4,5,8,7,6,0 };
	float arr3[]{ 1.1,1.5,1.9,0.4,0.1,4.0,0.0 };
	msort(arr3, 7);
	msort(arr2,10);
	msort(arr1, 5);
	for (size_t i = 0; i < sizeof(arr2)/sizeof(*arr2); i++)
		cout << arr2[i] << " ";
	cout << endl;
	for (size_t i = 0; i < sizeof(arr3) / sizeof(*arr3); i++)
		cout << arr3[i] << " ";
	cout << endl;
	for (size_t i = 0; i < sizeof(arr1) / sizeof(*arr1); i++)
		cout << arr1[i] << " ";
	cout << endl;
    return 0;

}
