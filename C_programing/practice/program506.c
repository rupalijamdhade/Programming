
#include<stdio.h>
void Display()
{
    static int i = 1; 
    printf("hello everyone...%d\n",i);
    i++;
    Display();
}
int main()
{
    Display();
    return 0;
}