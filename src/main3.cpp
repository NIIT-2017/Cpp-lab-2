#include <iostream>
#include <cstring>
#include <task3.h>
using namespace std;

int main()
{
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, myChange);
    for (auto i : arr)
        cout << i <<" ";
    cout << endl;

    double arr2[5]{1, 2.2, 3.3, 4.4, 5};
    map<double, n>(arr2, myChange);
    for (auto i : arr2)
        cout << i <<" ";
    cout << endl;

    char arr3[n]{'1', '2', '3', '4', '5'};
    map<char, n>(arr3, myChange);
    for (auto i : arr3)
        cout << i <<" ";
    cout << endl;
    return 0;
}
