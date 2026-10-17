//write a recursive program which display below pattern
//Output: 1 2 3 4 5

#include<stdio.h>

void Display(int iNo, int iSize)
{
    if(iNo > iSize)
        return;
    printf("%d", iNo);
    Display(iNo + 1, iSize);

}

int main()
{
    Display(1,5);
    printf("\n");
    return 0;
}