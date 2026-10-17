// Accept character from user.if character is small display its
//corresponding capital character , 
// and if it small then display its corresponding capital 
//in other cases display as it is.

//Input:Q
//output:q
//Input:m
// output:M
//input:4
//output:4
//input:%
//output:%

#include<stdio.h>


void Display(char ch)
{
    if(ch >= 'A'&& ch <='Z')
    {
        printf("%c\n",ch + 32);
    }
    else if(ch >= 'a'&& ch <= 'z')
    {
        printf("%c\n",ch - 32);
    }
    else
    {
        printf("%c\n",ch);
    }

}
int main()
{
    char cValue ='\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
