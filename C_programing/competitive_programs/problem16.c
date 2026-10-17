//accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int i=0;
    int iMult=1;

    for(i=1;i<=iNo;i++)//the loop runs from 1 to n
    {
        if(iNo%i==0)
        {
            iMult=iMult*i;//for every iteration  constant time oprations happens
        }
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);
    return 0;
}
//time complexity =O(n)