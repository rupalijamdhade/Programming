#include<stdio.h>

int main()
{
    char FileName[30];

    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "w");

    if(fp == NULL)
    {
        printf("Unable to create file");
        return -1;
    }
    printf("file created successfully");
    fclose(fp);

    return 0;
}