//Accept Range from user and return addition of all even numbers in between that range
#include<stdio.h>

int RangeAddEven(int iStart , int iEnd)

{
    int iCnt = 0;
    int iSum = 0;
    if (iStart > iEnd)
    {
        printf("invalid range");
        return 0;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum=iSum + iCnt;
        }
        
    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter End Point: ");
    scanf("%d",&iValue2);

    iRet=RangeAddEven(iValue1 , iValue2);
    printf("Addition is %d\n",iRet);

    return 0;
}