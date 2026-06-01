//accept number from user and print first 5 multiple of N
#include<stdio.h>


void DisplayMultiple(int iNo)
{
    
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);
    return 0;
}