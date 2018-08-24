#ifndef TASK2_H
#define TASK2_H
using namespace std;
template<class T>
T myGen()

{
    static int t = 48;
    return t++;
}

template<>
char* myGen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for (size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

template <typename T, size_t N>
T* createArr(T (*gen)()){
    T* arr = new T[N];
    for (size_t i = 0; i < N; i++){
        arr[i] = gen();
    }
    return arr;
}

#endif // TASK1_H
