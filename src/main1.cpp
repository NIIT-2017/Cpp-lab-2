#include <iostream>
#include "task1.h"
using namespace std;



int main()
{
	
	char* arr1[3]{ (char*)"ffff", (char*)"ff", (char*)"f" };
	
	msort(arr1, 3);
	for (size_t i = 0; i < 3; i++)
	{
     
	 cout << arr1[i] << endl;
	}
		
	return 0;
}