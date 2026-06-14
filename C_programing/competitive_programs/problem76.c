//printing pattern
//Accept number from user and Display below pattern

//input: 5
// OUTPUt: A B C D E

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    char c = 'A';
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",c);
        c++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}