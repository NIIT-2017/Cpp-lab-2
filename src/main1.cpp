#include <iostream>
#include "task.h"
using namespace std;


int main()
{
	const size_t N = 8;
	int arr1[N] = { 1, 2, 3, 5, 2, 0, 8, 7 };
	map<int, N>(arr1, change);
	for (auto c : arr1){
		cout << c << " ";
	}
	cout << endl;

	double arr2[N] = { 1.1, 2.3, 3.1, 5.0, 2.1, 8.1, -7.0, 0.0 };
	map<double, N>(arr2, change);
	for (auto c : arr2){
		cout << c << " ";
	}
	cout << endl;

	return 0;
}