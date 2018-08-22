#include <iostream>
#include <cstring>
#include <task2.h>
using namespace std;

int main()
{

    const size_t N = 5;
    char* arr;
    arr = createArr<char, N>(myGen);
    for (size_t i = 0; i < N; i++)
        std::cout << arr[i] << std::endl;
    char** arr2;
    arr2 = createArr<char*, N>(myGen);
    for (size_t i = 0; i < N; i++)
        std::cout << arr2[i] << std::endl;
    return 0;
}
