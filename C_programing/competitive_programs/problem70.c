//accept number from user and return product of all elements
#include<stdio.h>
#include<stdlib.h>

int  Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iMult = Arr[iCnt] * iMult;
    }
    return iMult;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

    
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter elements:%d", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iSize);
    printf("product is %d \n",iRet);

    free(p);
    
    return 0;
    }



