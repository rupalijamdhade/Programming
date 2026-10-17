//write a program which accept string from user and 
// reverse that string in place.

#include<stdio.h>

void StrRevX(char *str)
{
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }

}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is :%s\n",arr);
    return 0;
}
