//accept number from user and accept one another number as No, check whether No is present or not
# include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;

}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    BOOL bRet = FALSE;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("enter number to be search:\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present");
    }
    free(p);

    return 0;

}