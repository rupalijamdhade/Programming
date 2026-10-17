// accept N number from user and and accept one another number as No, and return  index of last occurance of that number
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    return iIndex;
}

int main()
{
    int iCnt = 0, iRet = 0, iSize = 0, iValue = 0;
    int *p = NULL;

    printf("Enter elements:\n");
    scanf("%d",&iSize);

    printf("Enter element to be search:");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("enter %d elements:",iSize );

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=LastOcc(p, iSize, iValue);
    printf("last occurance at index:%d\n",iRet);

    free(p);
    return 0;
}