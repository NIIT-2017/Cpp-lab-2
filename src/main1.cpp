#include <iostream>
#include"task1.h"
using namespace std;

int main()
{
	int i;
	const int n = 7;
	int a1[n] = {2,6,3,63,5,8,98};
	float a2[n] = {1.0, 5.6, 7.8, 4.5, 6.44, 3.6, 2.3};
	double a3[n] = { 90.0, 5.6, 74.5, 4.5, 6.44, 3.6, 2.3 };
	char* a4[n]{ (char*)"wqhfktf", (char*)"qgjrf", (char*)"d", (char*)"afhk", (char*)"ajkwefljqv", (char*)"oo" ,(char*)"ooss" };
	
	msort(a1, n); 
	for (i = 0; i < n; i++) cout << a1[i] << " ";
	cout << endl;
	msort(a2, n);
	for (i = 0; i < n; i++) cout << a2[i] << " ";
	cout << endl;
	msort(a3, n);
	for (i = 0; i < n; i++) cout << a3[i] << " ";
	cout << endl;
	
	msort(a4, n);
	for (i = 0; i < n; i++) cout << a4[i] << " ";
	cout << endl;
	return 0;
}
