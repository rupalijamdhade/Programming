//write a program which acept string from user and returns diifereance
//between frequency of small character and frequency of capital characters.

//input:"HEllo"
//output:1 (3-2)

#include<stdio.h>

int Difference(char *str)
{
    int SmallCount = 0;
    int CapitalCount = 0;


    //filter

    while(*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            CapitalCount++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            SmallCount++;
        }
        str++;

    }
    return(SmallCount - CapitalCount);
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%s",arr);

    iRet = Difference(arr);

    printf("difference is:%d \n",iRet);
    return 0;
}