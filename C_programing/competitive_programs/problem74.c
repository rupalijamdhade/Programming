//Accept number from user  and display all such elements which contain 3 digits in it
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iNo = 0;
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        while(iNo!=0)
        {
            if(iNo % 10 == 3)
            {
                printf("%d\n",Arr[iCnt]);
                break;
            }
            iNo = iNo/10;
        }
    }
       
}

int main()
{
    int iCnt = 0, iRet = 0, iSize =0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    DisplayDigits(p ,iSize);

    free(p);
    return 0;
}