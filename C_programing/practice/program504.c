
#include<stdio.h>
void Display()
{
    printf("hello everyone.....\n");
    Display();
}
int main()
{
    Display();
    return 0;
}