#include<iostream>
#include "task2.h"
#define N 10

int main() {

	//�������� ��������� ������� createArr, 
	//��������� ������������ ������ ��������� ���� T 
	//�������� N.
	//������ ������� ������� ������������ 
	//������� ��������� �������� gen,
	//��������� �� ������� ��������� ������� createArr.
		
	int *arr;
	arr = createArr<int, N>(gen);
	
	double *arr1;
	arr1 = createArr<double, N>(gen);
	

	char *arr2;
	arr2 = createArr<char, N>(gen);
	

	char **arr3;
	arr3 = createArr<char*, N>(gen);
	


	return 0;
}