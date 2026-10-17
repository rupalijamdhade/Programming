
// Write a program which accepts file name from user
// and display first 12 characters from that file.

#include<stdio.h>

void Display(char FName[])
{
    FILE *fp = NULL;
    char ch = '\0';
    int i = 0;

    fp = fopen(FName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return;
    }

    for(i = 1; i <= 12; i++)
    {
        ch = fgetc(fp);

        if(ch == EOF)
        {
            break;
        }

        printf("%c", ch);
    }

    fclose(fp);
}

int main()
{
    char FileName[30];

    printf("Enter file name: ");
    scanf("%s", FileName);

    Display(FileName);

    return 0;
}
