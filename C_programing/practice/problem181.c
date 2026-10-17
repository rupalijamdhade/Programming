//write recursive program
//  which accepts number from user and return its reverse number

#include<stdio.h>

int Reverse(int iNo, int iRev)
{
    int iDigit = 0;

    if(iNo == 0)
        return iRev;

    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;

    return Reverse(iNo / 10, iRev);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue, 0);

    printf("Reverse number is: %d\n", iRet);

    return 0;
}