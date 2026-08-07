// write aprogram which accept string from user and
//  count number of small character

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    //filter
    while(*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%s",arr);

    iRet = CountSmall(arr);
    printf("%d\n",iRet);
    return 0;
}