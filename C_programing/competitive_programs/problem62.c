// Accept N number from user and return difference between frequqncy of even number and odd numbers
#include<stdio.h>
#include<stdlib.h>

    int Frequency(int Arr[], int iLength)
    {
        int iCnt = 0;
        int EvenCnt = 0;
        int OddCnt = 0;

        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                EvenCnt++;
            }
            else
            {
                OddCnt++;
            }
        }
        return(EvenCnt - OddCnt);

    }


int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Ennter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize);
    printf("%d\n",iRet);

    free(p);

    return 0;
}