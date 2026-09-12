/*write recursive program which accepts string from user
and Count number of character

Input:Hello
Output: 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + Strlen(str + 1);
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String: \n");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d\n", iRet);

    return 0;
}
