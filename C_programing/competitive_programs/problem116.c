// write a program which displays ASCII table.table contais symbol,
//decimal, Hexadecimal and Octal representation of every member from 0 to 255
#include<stdio.h>
void DisplayASCII()
{
    int i;

    printf("Dec\tHex\tOct\tChar\n");
    printf("__________________________________\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n",i,i,i,i);
    }

}
int main()
{
    DisplayASCII();

    return 0;
}