#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello world";
    int iRet = 0;

    iRet = strlen(str);//count only visible character

    printf("Length of string is:%d\n",iRet);

    iRet = sizeof(str);//Returns total memory occupied by the array including\0

    printf("Size of string is: %d\n",iRet);

    return 0;
}