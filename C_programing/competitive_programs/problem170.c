//write a recursive program which display below pattern

//Output: a b c d e f

#include<stdio.h>

void Display(char ch, char cSize)
{
    if(ch > cSize)
        return;
    printf("%c\t",ch);
    Display(ch + 1, cSize);
}

int main()
{
    Display('a', 'e');
    printf("\n");
    return 0;
}