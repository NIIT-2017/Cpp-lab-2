#ifndef _TASK_H_
#define _TASK_H_

template<typename T> 
T gen()
{
	return rand() % 100;
}

template<> 
char* gen()
{
	const int n = rand() % 10 + 1;
	char *res = new char[n];
	for (int i = 0; i < n; i++)
		res[i] = 'a' + rand() % 24;
	res[n] = '\0';
	return res;
}

template<typename T>
 T change(T a)
{
	return a + 2;
}

template<> 
char* change(char* a)
{
	for (int i = 0; i < strlen(a); i++)
		a[i] = a[i] + 2;
	return a;
}
#endif
