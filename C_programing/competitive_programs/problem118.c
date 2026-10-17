//Accept character from user. if it is capital then display all
//the characters from the input character till Z.
//if input character is small then print all the characters in reverse order tiil a
//in other cases return directly.

//Input:Q

//Outpu: Q, R, S,T, U, v, w,x,z

//Input:m

//Output: m l k j i h g f e d c b a
//Input:8


#include<stdio.h>

void Display(char ch)
{
    char i;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
        
    }
    else if(ch >= 'a' && ch <='z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else 
    {
        printf("%c",ch);
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter the charcter \n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}