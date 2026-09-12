
// Write a program which accepts file name from user
// and count frequency of character 'm' from that file.

#include<stdio.h>

int CountM(char FName[])
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
        if(ch == 'm')
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

    iRet = CountM(FileName);

    printf("Frequency of m is %d", iRet);

    return 0;
}
