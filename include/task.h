#ifndef _TASK_H_
#define _TASK_H_

template<typename T> T gen()
{
	return 0;
}
template<> int gen()
{
	int res = rand() % 100;
	return res;
}
template<> double gen()
{
	double res = rand() % 1000 / 10;
	return res;
}

template<> float gen()
{
	float res = rand() % 1000 / 10;
	return res;
}

template<> char gen()
{
	return 'a' + rand() % 24;
}

template<> char* gen()
{
	const int n = rand() % 10 + 1;
	char *res = new char[n];
	for (int i = 0; i < n; i++)
		res[i] = 'a' + rand() % 24;
	res[n] = '\0';
	return res;
}


template<> bool gen()
{
	return rand() / 2 %10;
}

template<typename T>
 T change(T a)
{
	return T + 2;
}


template<> int change(int a)
{
	return a * a;
}

template<> float change(float a)
{
	return a + 1.3;
}

template<> double change(double a)
{
	return a * 2;
}

template<> char change(char a)
{
	return a + 2;
}


template<> char* change(char* a)
{
	for (int i = 0; i < strlen(a); i++)
		a[i] = a[i] + 2;
	return a;
}
#endif
