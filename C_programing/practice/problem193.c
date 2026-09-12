//write application which accepts file name
//  from user read all data from that file and 
// display contents on screen
#include<stdio.h>

int main()
{
    char FileName[30];
    FILE *fp = NULL;
    char ch = '\0';

    printf("Enter file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

