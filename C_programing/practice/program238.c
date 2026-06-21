#include<stdio.h>

int main()
{
    char *str = "Hello";
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    printf("Length of string is:%d\n",iCount);

    return 0;
}