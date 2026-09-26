//Input 12345
//Output:1*2*3*4*5

#include<stdio.h>

int Multiplication(int iNo)
{
    int iDigit = 0;
    static int iSum = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum * iDigit;
        Multiplication(iNo / 10);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("Multiplication is : %d\n",iRet);
    
    return 0;
}