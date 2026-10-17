
// write a program which accepts file name from user and
// count number of capital characters from that file.
//
// Input: Demo.txt
// Output: Number of capital characters are 5

#include<stdio.h>

int CountCapital(char FName[])
{
    FILE *fp = NULL;
    char ch = '\0';
    int iCount = 0;

    // Open file in read mode
    fp = fopen(FName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return -1;
    }

    // Read the file character by character
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            iCount++;
        }
    }

    // Close the file
    fclose(fp);

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital characters are %d", iRet);

    return 0;
}

