//write a recursive program which accept number from user
//and return largest digit

#include<stdio.h>

int LargestDigit(int iNo, int iMax)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        return iMax;
    }

    iDigit = iNo % 10;

    if(iDigit > iMax)
    {
        iMax = iDigit;
    }

    return LargestDigit(iNo / 10, iMax);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = LargestDigit(iValue, 0);

    printf("Largest digit is: %d\n", iRet);

    return 0;
}