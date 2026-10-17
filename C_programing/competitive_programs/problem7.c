//accept one number from user and print that nuber of * on screen
#include<stdio.h>

void Display(int iNo)
{
    int iValue=0;
    while(iNo>iValue)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
