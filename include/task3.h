template<typename T> T change(T);

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

template<typename T>
void map(T *arr, int n, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}
