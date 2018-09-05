#pragma once
#ifndef TASK1_H
#define TASK1_H
#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>
#include <map>
#include <iostream>
using namespace std;
 

bool compare(char* a, char* b) {

	if (strlen(a) == strlen(b))
		return strcmp(a, b) < 0;
	else
		return strlen(a) < strlen(b);
	 
}
void merge(char** a, int l, int r, const size_t size) {
 
	if (r == l)
		return;
	if (r - l == 1) {
		if (compare(a[r],a[l] )) {
			char* temp = a[r];
			a[r] = a[l];
			a[l] = temp;

		}

			//swap(a[r], a[l]);
		return;
	}
	int m = (r + l) / 2;
	merge(a, l, m, size);
	merge(a, m + 1, r, size);
	char **buf = new char*[size];
	 
	int xl = l;
	int xr = m + 1;
	int cur = 0;
	while (r - l + 1 != cur) {
		if (xl > m)
			buf[cur++] = a[xr++];
		else if (xr > r)
			buf[cur++] = a[xl++];
		else if (compare(a[xr],a[xl]))
			buf[cur++] = a[xr++];
		else buf[cur++] = a[xl++];

	}
	for (int i = 0; i < cur; i++)
		a[i + l] = buf[i];
}


template<typename T>
 void merge(T* a, int l, int r, const size_t size) {
	 
	if (r == l)
		return;
	if (r - l == 1) {
		if (a[r] < a[l])
			swap(a[r], a[l]);
		return;
	}
	int m = (r + l) / 2;
	merge(a, l, m, size);
	merge(a, m + 1, r, size);
	T *buf = new T[size];
	//T* buf[size];
	int xl = l;
	int xr = m + 1;
	int cur = 0;
	while (r - l + 1 != cur) {
		if (xl > m)
			buf[cur++] = a[xr++];
		else if (xr > r)
			buf[cur++] = a[xl++];
		else if (a[xl] > a[xr])
			buf[cur++] = a[xr++];
		else buf[cur++] = a[xl++];

	}
	for (int i = 0; i < cur; i++)
		a[i + l] = buf[i];
}

template<typename T> void msort(T & a, const size_t n) {
	 
	merge(a, 0, n-1, n);
	 
}

template<> void msort<char*>(char* & a, const size_t n) {
	merge(&a, 0, n - 1, n);
}

#endif 