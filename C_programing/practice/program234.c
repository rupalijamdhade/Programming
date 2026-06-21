#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello world";
    int iRet = 0;

    iRet = strlen(str);

    printf("Length of String is: %d\n",iRet);

    return 0;
}