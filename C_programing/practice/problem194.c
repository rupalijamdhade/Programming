//write application which accept file from user
//  and display size of file

#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;

    long int iSize = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return -1;
    }

    fseek(fp, 0 , SEEK_END);

    iSize = ftell(fp);

    printf("size of file is :%ld bytes\n", iSize);

    fclose(fp);
    return 0;
}