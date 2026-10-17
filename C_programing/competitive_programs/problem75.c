//Accept N number from user and display summation of digits of each numbers
#include<stdio.h>
#include<stdlib.h>

void DisplaySum(int Arr[], int iLength)
{
    int iCnt =0;
    int iNo = 0;
    int iDigit = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;
        while(iNo!=0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo=iNo/10;
        }
        printf("sum of digits of %d is %d\n",Arr[iCnt], iSum);
    
    }
    
}
int main()
{
    int iCnt = 0, iRet = 0, iSize = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to aalocate memory");
        return -1;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter %d element:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    DisplaySum(p, iSize);
    
    free(p);

    return 0;
}