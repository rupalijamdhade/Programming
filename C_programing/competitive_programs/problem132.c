//write a program which accept string from user and accept one character
//return frequency of that charcter

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str !='\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    printf("enter the character:\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is:%d\n",iRet);
    return 0;
}