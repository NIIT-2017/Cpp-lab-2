#include <iostream>
#include <ctime>
template <typename T>
void msort(T * a, size_t n);
template <typename T>
void intoa(T * a, T* b, size_t n);
template <typename T>
void sravn(T* a, T* b, size_t n);
template <typename T>
bool usravn(T a, T b);
bool usravn(char* a, char* b);
#include "task1.h"
using namespace std;
int main()
{
	const size_t n = 6;
	int* val1 = new int[n]{ 5, 3, 2, 4, 1, 6 };
	msort(val1, n);
	for (int i = 0; i < n; i++)
		cout << val1[i] << " ";
	cout << endl;
	
	double val2[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val2, n);
	for (int i = 0; i < n; i++)
	cout << val2[i] << " ";
	cout << endl;

	char* val3[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val3, n);
	for (int i = 0; i < n; i++)
		cout << val3[i] << " ";
	return 0;
}