#include <iostream>
#include "task1.h"
#include "task.h"  // print()

using namespace std;

int main()
{
	const size_t n = 10;
	int* value1 = new int[n]{ 99, 5, 6, 3, 2, 51, 24, 73, 60, 13 };
	msort(value1, n);
	print(value1, n);
	
	
	double value2[n]{ 5.1, 78.6, 33.4, 52.5, 71.3, 28, -13, -66.4, 6.7, -12.9 };
	msort(value2, n);
	print(value2, n);

	char* value3[n]{ (char*)"qwerty", (char*)"yyy", (char*)"ddddd", (char*)"12v12", (char*)"x", (char*)"xyz", (char*)"qwertyuiop", (char*)"xyz", (char*)"zxcvb", (char*)"32as56df89"};
	msort(value3, n);
	print(value3, n);
	
	delete[] value1;
	return 0;
}