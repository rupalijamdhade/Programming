#include<stdio.h>
void Display()
{
    auto int i = 0;//sto
    i =1;
    if( i<= 4)
    {
        printf("hello world...\n");
        i++;
        Display();
    }
    
}
int main()
{
    Display();
    return 0;
}