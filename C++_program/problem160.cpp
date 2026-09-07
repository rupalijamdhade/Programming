//wtite generic program to accept N values from user
//and return smallest value

#include <iostream>
#include<cstdio>
using namespace std;

template<class T>

T Min(T *arr, int iSize)
{
    T tMin = arr[0];

    for (int i = 1; i < iSize; i++)
    {
        if (arr[i] < tMin)
        {
            tMin = arr[i];
        }
    }

    return tMin;
}
int main()
{
    
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Min(arr, 5);

    printf("%d\n", iRet);

    float fRet = Min(brr, 4);
    printf("%f\n", fRet);

    return 0;

}