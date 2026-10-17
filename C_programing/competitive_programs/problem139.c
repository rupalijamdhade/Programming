// write a program which accept string from user 
// and copy capital character of that string into another string.


#include<stdio.h>
void StrCpyCap(char *src, char *dest)
{
    // fiter

    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest='\0';
}
int main()
{
    char arr[30]="HeLLo EveryOne";
    char brr[30];

    StrCpyCap(arr, brr);
    printf("%s\n",brr);
    return 0;
}