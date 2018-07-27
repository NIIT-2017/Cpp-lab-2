#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int arr1[] = {1, 2, 3, 5, 2, 0, 8, 7};
	size_t N = 8;
	msort(arr1, N);
	for (auto c : arr1){
		cout << c << " ";
	}
	cout << endl;

	double arr2[] = { 1.1, 2.3, 3.1, 5.0, 2.1, 8.1, -7 };
	N = 7;
	msort(arr2, N);
	for (auto c : arr2){
		cout << c << " ";
	}
	cout << endl;
	char arr3[] = { 'b', 'a', 'l', 'k', 'z', '8', 'o' };
	N = 7;
	msort(arr3, N);
	for (auto c : arr3){
		cout << c << " ";
	}
	cout << endl;

	char* arr4[] = { "jkjk", "jkjkjkjkj", "d", "jf", "jk", "kkjkjkjkjkj", "nhb", "jfhdd", "dfhnjeoll;l;p" };
	N = 9;
	msort(arr4, N);
	for (auto c : arr4){
		cout << c << " ";
	}
	cout << endl;
	return 0;
}