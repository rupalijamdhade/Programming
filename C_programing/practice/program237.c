//traversing a string using pointer
#include<stdio.h>

int main()
{
    char *str = "hello";// pointer points to the first character'G'

    while(*str != '\0')
    {
        printf("%c\n",*str);//*str gives the current character
        str++;// move the pointer to next character
    }
    //loop continues until the null character'\0' is reached
    return 0;
}