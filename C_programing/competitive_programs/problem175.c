//write a recursive program which display below pattern
//Input 6
//Output a b c d e f

#include<stdio.h>
void Display(int iNo)
{
    if(iNo > 6)
        return;
    printf("%c ", 'a'+ iNo - 1);
    Display(iNo + 1);

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(1);

    return 0;
}