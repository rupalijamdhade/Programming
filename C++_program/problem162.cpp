/*write generic program to accept N values  
and count frequency of any specific value
Input: 10 20 30 10 30 40 10 40 10
value to check frequency: 10
Output: 4 
 */ 

#include <iostream>
#include<cstdio>
using namespace std;

template<class T>

int Frequency(T *arr, int iSize, T iNo)
{
    int iCount = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iNo == arr[i])
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(Arr, 9, 10);

    cout<<"frequency of give number is:"<< iRet;
    return 0;
}