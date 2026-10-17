//wriete a recursive program which number from user 
//and return smallest digit

#include<stdio.h>

int SmallestDigit(int iNo, int iMin)
{
    int iDigit = 0;

    if(iNo == 0)
        return iMin;

    iDigit = iNo % 10;

    if(iDigit < iMin)
    {
        iMin = iDigit;
    }

    return SmallestDigit(iNo / 10, iMin);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SmallestDigit(iValue, 9);

    printf("Smallest digit is: %d\n", iRet);

    return 0;
}