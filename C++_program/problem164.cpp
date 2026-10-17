/*write generic program to accept N values 
and search last ocuurance of any specific value
value to search: 40
output: 8
*/
#include <iostream>
#include<cstdio>
using namespace std;

template<class T>

int SearchFirst(T *arr, int iSize, T iNo)
{
    for(int i =  iSize -1 ; i >= 0; i--)
    {
        if(iNo == arr[i])
        {
            return i + 1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr, 9 ,40);

    cout<<" last occurance of given number is:"<< iRet;

    return 0;
}