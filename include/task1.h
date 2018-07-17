//Autor is Dmitriy Parev
#ifndef _TASK1_H_
#define _TASK1_H_

#include <cstring>

template<class T>
bool condition(T t1, T t2)
{
    return t1 < t2;
}

template<>
bool condition(char* t1, char* t2)
{
    return strlen(t1) < strlen(t2);
}

template<class T>
void msort(T *values, size_t n)
{
	if (n < 2) return;
    size_t p = n / 2;
	msort(values, p);
    msort(values + p, p + n % 2);
    T val[n];
    size_t l = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (condition(values[l], values[p]))
        {
            val[i] = values[l];
            l++;
        }
        else
        {
            val[i] = values[p];
            p++;
        }
        if (l == n / 2)
        {
            while (p < n)
            {
                i++;
                val[i] = values[p];
                p++;
            }
        }
        if (p == n)
        {
            while (l < n / 2)
            {
                i++;
                val[i] = values[l];
                l++;
            }
        }
    }
    for (size_t i = 0; i < n; i++)
       values[i] = val[i];
}
#endif