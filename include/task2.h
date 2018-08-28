template <typename T>
T* createArr(const int N, T(&gen)());
template<typename T> T gen();

template <typename T>
T* createArr(const int N, T(&gen)())
{
	T *arr = new T[N];
	for (int i = 0; i < N; i++)
	arr[i] = gen();

	return arr;
}

template<typename T> T gen();
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
