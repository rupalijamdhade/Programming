//Accept range from user and return addition of all numbers in between range

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt=0;
    int iSum=0;

    {
        if(iStart > iEnd)
        {
            printf("invalid Range");
            return 0;
        }
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            iSum=iSum+iCnt;
        }
        return iSum;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter starting point: ");;
    scanf("%d",&iValue1);

    printf("Enter End point: ");;
    scanf("%d",&iValue2);
    
    iRet = RangeSum(iValue1,iValue2);
    printf("Addition is:%d\n" , iRet);
    return 0;

}