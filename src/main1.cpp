//Autor is Dmitriy Parev
#include <iostream>
#include "task1.h"
#include "task.h" //вспомогательные функции print, gen, change

int main()
{
	int *val = new int[6]{5, 3, 2, 4, 1, 6};
	size_t n = 6;
	msort(val, n);
	print(val, n);
	
	double val2[6]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
	msort(val2, n);
	print(val2, n);

	char* val3[6]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
	msort(val3, n);
	print(val3, n);

	delete[] val;
	return 0;
}