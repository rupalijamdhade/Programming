 //4
 //1+2+3+4


#include<stdio.h>
int Summation(int iNo)
{
    

    if( iNo > 0)
    {
        iSum = iSum +iNo;
        iNo--;
        Summation(iNo-1);
    }
    return iSum;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter frequncy:\n");

    scanf("%d",&iValue);
    iRet = Summation(iValue);

    printf("Summation is:%d\n",iRet);
    
    return 0;
}