/*
Accept number of rows and column from user and Display below pattern.

input: iRow = 4 iCol = 4

Output:
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow;i++)
    {
        if(i % 2 != 0)
        {
            for(j = 2; j <=10; j = j+2)
            {
                printf("%d\t",j);
            }
        }
        else
        {
            for(j =1; j<=9;j=j+2)
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
    

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows And Columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}