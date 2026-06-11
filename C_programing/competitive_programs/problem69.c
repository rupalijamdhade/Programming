//Accept N number from user and accept rangr, Display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0, iRet = 0;
    int *p = NULL;
    
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter the ending point:");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p ,iSize, iValue1, iValue2);
    free(p);

    return 0;
    }
