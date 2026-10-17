/*
accept number of rows and number of column from user
and display below pattern

input: iRow=5 iCol= 5

output:
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';
    int iNum = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch ='a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else
        {
            iNum = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",iNum);
                iNum++;
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter numbers of row and column:");

    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);

    return 0;

}

