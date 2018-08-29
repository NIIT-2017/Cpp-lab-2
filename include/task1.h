#ifndef TASK1_H
#define TASK1_H
using namespace std;
template<typename T>
bool compare(const T a, const T b)
{
    return a < b;
}
template<>
bool compare<const char*>(const char * a, const char * b)
{
    if (strlen(a) == strlen(b))
        return strcmp(a, b) < 0;
    else
        return  strlen(a) < strlen(b);
}

template<>
bool compare<char*>(char * a, char * b)
{
    if (strlen(a) == strlen(b))
        return strcmp(a, b) < 0;
    else
        return  strlen(a) < strlen(b);
}


template <typename T>
void Merge(T *A, T *mas, int first, int last)
{
//    cout << " Merge ="<<endl;
//    for (int i=0;i<last;i++)
//    {
//        cout << A[i]<<" ";
//    }
//   cout <<endl;
    int middle, start, final, j;
    middle=(first+last)/2; //вычисление среднего элемента
    start=first; //начало левой части
    final=middle+1; //начало правой части
    for(j=first; j<=last; j++) //выполнять от начала до конца
        if ((start<=middle) && ((final>last) || (compare(A[start],A[final]))))
        {
            mas[j]=A[start];
            start++;
        }
        else
        {
            mas[j]=A[final];
            final++;
        }
    //возвращение результата в список
    for (j=first; j<=last; j++) A[j]=mas[j];
};
//рекурсивная процедура сортировки
template <typename T>
void MergeSort(T *A, T *temp, int first, int last)
{
        if (first<last)
        {
            MergeSort(A, temp , first, (first+last)/2); //сортировка левой части
            MergeSort(A, temp ,(first+last)/2+1, last); //сортировка правой части
            Merge(A, temp ,first, last); //слияние двух частей
        }
};

template <typename T>
void msort(T *arr, size_t size){
    int head = 0;
    int end= size - 1;
    T *temp_arr = new T[size];
    MergeSort(arr, temp_arr ,head, end);
    delete[] temp_arr;
}

#endif // TASK1_H
