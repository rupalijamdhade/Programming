//Recursion

#include<stdio.h>
void Display()
{
    int i = 0;
    while(1)
    {
        printf("hello everyone...%d\n",i);
        i++;
    }
    
    
    Display();
}
int main()
{
    Display();
    return 0;
}