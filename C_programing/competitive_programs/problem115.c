//Accept division of student from user and depends on the division display exam timing.
//there are 4 division in school as A,B,C,D.exam of division A at 7 Am,B at 8.30 AM, c at 9.20 AM and D at 10.30 AM
//(Application should be case sensitive)

//INPUT: C
//OUTPUT: Your exam at 9.20 AM

//INPUT:d
//OUTPUT:your exam at 10.30 AM

#include<stdio.h>
#define TRUE 1
#define FALSE 0

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("your exam is at 7.00 AM\n");
    }
    else if(chDiv == 'B'|| chDiv == 'b')
    {
        printf("your exam is at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("your exam is at 9.20\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("your exam is at 10.30AM\n");
    }
    else
    {
        printf("Invalid entrry");
    }

}
int main()
{
    char cValue = '\0';
    //BOOL bRet = FALSE;

    printf("Enter your division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}