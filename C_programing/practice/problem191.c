//write application which accept file name from user
//open that file in read mode

#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return -1;
    }

    printf("File opened successfully");

    fclose(fp);

    return 0;
}