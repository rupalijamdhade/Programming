// Accept number from user and return frequency of even number

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i < iLength;i++)
    {
        if((Arr[i] % 2 ) == 0)
        {
            printf("\n%d\n",Arr[i]);
            iCnt++;
        }
    }
    return iCnt;   
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p, iSize);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}
