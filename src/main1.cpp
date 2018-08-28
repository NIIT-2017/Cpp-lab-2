#include <iostream>
#include"task1.h"
using namespace std;

int main()
{
	int i;
	int a1[7] = {2,6,3,63,5,8,98};
	float a2[7] = {1.0, 5.6, 7.8, 4.5, 6.44, 3.6, 2.3};
	double a3[7] = { 90.0, 5.6, 74.5, 4.5, 6.44, 3.6, 2.3 };
	char* a4[7]{ (char*)"wqhfktf", (char*)"qgjrf", (char*)"d", (char*)"afhk", (char*)"ajkwefljqv", (char*)"oo" ,(char*)"ooss" };
	
	MergeSort(a1, 0, 6); 
	for (i = 0; i < 7; i++) cout << a1[i] << " ";
	cout << endl;
	MergeSort(a2, 0, 6);
	for (i = 0; i < 7; i++) cout << a2[i] << " ";
	cout << endl;
	MergeSort(a3, 0, 6);
	for (i = 0; i < 7; i++) cout << a3[i] << " ";
	cout << endl;
	
	MergeSort(a4, 0, 6);
	for (i = 0; i < 7; i++) cout << a4[i] << " ";
	cout << endl;
	return 0;
}