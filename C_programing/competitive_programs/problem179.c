/*write a recursive program which accepts string from user and 
count the number of small characters*/

#include<stdio.h>

int iCount = 0;

void CountSmall(char *str)
{
    if(*str == '\0')
        return;

    if(*str >= 'a' && *str <= 'z')
        iCount++;

    CountSmall(str + 1);
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    CountSmall(str);

    printf("Number of small characters: %d\n", iCount);

    return 0;
}