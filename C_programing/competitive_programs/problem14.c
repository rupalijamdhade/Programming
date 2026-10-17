//accept one character from user and convert case of that character
//input:a
//output:A

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue>='a')&&(cValue<='z'))
    {
        printf("%c",cValue -32);
    }
    else if((cValue>='A')&&(cValue<='z'))
    {
        printf("%c",cValue +32);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}