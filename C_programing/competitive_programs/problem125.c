//write a program which accept string from user and
//  display it in revrse order

#include<stdio.h>

void Reverse(char *str)
{
    char *end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(end >= str)
    {
        printf("%c",*end);
        end--;
    }
    printf("\n");

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}