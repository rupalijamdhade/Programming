// accept string from user and Count the vowels

#include<stdio.h>

int CountVoweles(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' ||
        *str == 'i' || *str == 'o' ||
        *str == 'u' )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[] = {'\0'};
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountVoweles(Arr);

    printf("Frequency is:%d\n",iRet);
}