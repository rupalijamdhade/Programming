//Aceept N number from user and Display All such elements which are divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iCnt = 0;
    for(i = 0; i < iLength ; i++)
    {
        if(( Arr[i] % 3 == 0) && ( Arr[i] % 5 == 0))
        {
            printf("%d",Arr[i] );
            iCnt++;
        }
    }
    return iCnt;

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unabble to allocate memory");
        return -1;
    }
    printf("Enter %d elements", iSize);
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("\nEnter element:%d \t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p, iSize);

    printf("\nResult is %d \n",iRet);

    free(p);

    return 0;
}
