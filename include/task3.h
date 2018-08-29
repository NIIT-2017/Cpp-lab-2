#ifndef TASK3_H
#define TASK3_H
#include <cstring>
using namespace std;

template<class T>
T myChange(T val)
{
    return val + 1;
}

template<>
char* myChange(char* val)
{
    size_t n = strlen(val);
    for (size_t i = 0; i < n; i++)
        //val[i] = 'a';
        val[i] = val[i] + 1;
    return val;
}

template<typename T, size_t N>
void map(T (&arr)[N], T(*change)(T))
{
    for (size_t i = 0; i < N; i++)
    {
        arr[i] = change(arr[i]);
    }
}

#endif // TASK3_H
