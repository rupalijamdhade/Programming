//accept N number from user and accept one another nunber as No, return frequency from it
#include<stdio.h>
#include<stdlib.h>

    
int Frequency(int Arr[], int iLength, int No)
{
    int iCnt = 0;
    int iFreq = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iFreq++;
        }

    }
    return iFreq;
       
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    int iNo = 0;
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter number to search:");
    scanf("%d",&iNo);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element:%d",iCnt + 1 );
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p, iSize, iNo);
    printf("%d",iRet);

    free(p);
    return 0;
}