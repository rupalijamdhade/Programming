//write a recursive program which Display below pattern
//Output: A B C D E

#include<stdio.h>

void Display(char ch, char cSize)
{
    if(ch > cSize)
        return;
    printf("%c\t", ch);
    Display(ch + 1, cSize);

}

int main()
{
    Display('A','E');
    printf("\n");
    return 0;
}