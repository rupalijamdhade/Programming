//Accept N number from user and accept one another number as No,
//return index of first occurance of that number

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int index = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iCnt = 0, iRet = 0, iValue = 0, iSize = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    printf("Enter the element to be search:");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf(" enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
        
    }
    iRet = FirstOcc(p, iSize, iValue);
    printf("%d",iRet);

    free(p);

    return 0;
}