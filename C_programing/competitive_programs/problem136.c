//write a program which accept string from user and
// copy the contets of thatstring into another string.
//(implement strcpy()function)

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
    // filter
    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    return;
}

int main()
{
    char arr[30] = "hello world";
    char brr[30];  //empty string

    StrCpyX(arr,brr);
    printf("%s\n",brr);

    return 0;
}