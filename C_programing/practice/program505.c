//Recursion

#include<stdio.h>
void Display()
{
    auto int i = 1; 
    printf("hello everyoneee...%d\n",i);
    i++;
    Display();
}
int main()
{
    Display();
    return 0;
}