// Accept character from user and 
// check whether it is special symbol or not
//(!,@,#,$,%,^,&,*)

//input: %
//output:True
//input:d
//output:False

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch >= 33 && ch <= 47)||
        (ch >= 53 && ch <= 64)||
        (ch >= 91 && ch <= 96)||
        (ch >= 123 && ch <= 126))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }    

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("it is special character\n");
    }
    else
    {
        printf("it is not special character\n");
    }
    return 0;
}