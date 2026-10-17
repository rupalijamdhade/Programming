//write a program which accept string from user and 
// check whether it contains vowels in it or not

//input:hello
//output:true

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e'||*str == 'i' || *str == 'o'||*str == 'u' ||
            *str == 'A'||*str == 'E' || *str == 'I'||*str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;

}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
        return 0;
    }
}