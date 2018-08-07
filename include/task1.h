#ifndef _TASK1_H_
#define _TASK1_H_

#include <cstring>

template <typename T>
bool compare(T low, T up){
	return low < up;
}

template <>
bool compare(char* low, char* up){
	return strlen(low) < strlen(up);
}

template <typename T>
void merge(T arr, T temp_arr, int start, int mid, int end){
	int temp = 0;
	int lower = start;
	int upper = mid + 1;
	while ((lower <= mid) && (upper <= end)){
		if (compare(arr[lower], arr[upper]))
			temp_arr[temp++] = arr[lower++];
		else
			temp_arr[temp++] = arr[upper++];
	}
	if (lower <= mid){
		while (lower <= mid){
			temp_arr[temp++] = arr[lower++];
		}
	}
	else{
		while (upper <= end){
			temp_arr[temp++] = arr[upper++];
		}
	}
	int i_arr = start;
	int i = 0;
	while (i_arr <= end){
		arr[i_arr++] = temp_arr[i++];
	}
}

template <typename T>
void ms_help(T arr, T temp_arr, int head, int tail){
	if (head == tail) return;
	int mid = (head + tail) / 2;
	ms_help(arr, temp_arr, head, mid);
	ms_help(arr, temp_arr, mid + 1, tail);
	merge(arr, temp_arr, head, mid, tail);

}

template <typename T>
void msort(T *arr, size_t size){
	int head = 0;
	int tail = size - 1;
	T *temp_arr = new T[size];
	ms_help(arr, temp_arr, head, tail);
	delete[] temp_arr;
}



#endif