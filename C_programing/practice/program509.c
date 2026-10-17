
#include<stdio.h>
void Display()
{
    static int i = 0;
    i = 1;//issue
    if( i<= 4)
    {
        printf("JAy ganesh...\n");
        i++;

        Display();
    }
    
}
int main()
{
    Display();
    return 0;
}