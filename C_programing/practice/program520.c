 
#include<stdio.h>
void Display(int iNo)
{
    if( iNo != 0)
    {
        printf("hello everyone...%d\n",iNo);
        
        Display(iNo-1);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter frequncy:\n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main\n");
    
    return 0;
}