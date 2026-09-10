//write a recursive program which display below pattern
//OutPut: 5 4 3 2 1

#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
        return;
    printf("%d\t", iNo);
    Display(iNo - 1);
}
int main()
{
    Display(5);
    printf("\n");
    return 0;

}