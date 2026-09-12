
// write a program which accepts file name from user and
// count number of small characters from that file.
//
// Input: Demo.txt
// Output: Number of Small characters are 5

#include<stdio.h>
int CountSmall(char FName[])
{
    FILE *fp = NULL;
    char ch = '\0';
    int iCount = 0;

    fp = fopen(FName, "r");

    if(fp == NULL)
    {
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            iCount++;
        }
    }

    fclose(fp);

    return iCount;
}
int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are %d", iRet);

    return 0;
}

