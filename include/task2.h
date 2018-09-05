#pragma once

template<class T>
T generate()
{
	 int t = 48;
	return t++;
}

template<>
char* generate()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template<typename T, int N>
T* createArr(T *generate())
{
	T* arr = new T[N];
	for (int i = 0; i < N; i++) {
		arr[i] = generate();
	}
	return arr;
}