//write a program which accept string from user and
//  copy the contents of that sting into another string

#include<stdio.h>

void StrNCpy(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt !=0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest='\0';
}
int main()
{
    char arr[30] = "Hello everyone";
    char brr[30];

    StrNCpy(arr,brr,10);
    printf("%s\n",brr);
    return 0;
}