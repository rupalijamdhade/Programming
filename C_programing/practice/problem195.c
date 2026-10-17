//write application which accepts file name from user and string
//Write String at End of File

#include<stdio.h>

int main()
{
    char FileName[30];
    char str[100];
    FILE *fp = NULL;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    fp = fopen(FileName, "a");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return -1;
    }

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("String written successfully");

    return 0;
}
```
