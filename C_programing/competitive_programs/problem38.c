//convert kilometer into meter
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d", iRet);

    return 0;
}