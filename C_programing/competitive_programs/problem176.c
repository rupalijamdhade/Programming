//write recursive program which accept string from user and
// count white spaces

//Input: He llo wor ld
//outPut:3

#include<stdio.h>
int WhiteSpace(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    if(*str == ' ')
    {
        return 1 + WhiteSpace(str+1); 
    }
    return WhiteSpace(str+1);

}

int main()
{
    char str[100];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    iRet = WhiteSpace(str);

    printf("Number of white spaces:%d\n",iRet);

    return 0;



}
