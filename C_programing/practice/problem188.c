
// Write a program which accepts file name from user
// and count number of spaces from that file.
//
// Input: Demo.txt
// Output: Number of spaces are 5

#include<stdio.h>

int CountSpace(char FName[])
{
    FILE *fp = NULL;
    char ch = '\0';
    int iCount = 0;

    fp = fopen(FName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == ' ')
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

    iRet = CountSpace(FileName);

    printf("Number of spaces are %d", iRet);

    return 0;
}
