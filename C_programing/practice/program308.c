#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iAns = 0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("third bit is on\n");
    }
    else
    {
        printf("third bit is off\n");
    }
    printf("%d",iNo);
    
    return 0;
}