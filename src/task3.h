#ifndef _TASK3_H_
#define _TASK3_H_

template <class T, size_t N> void map(T (&arr)[N], T(*change)(T)){
	
	
	
	for (int i = 0; i < N;i++) {
		arr[i]=change(arr[i]);
	}
	
}


#endif

