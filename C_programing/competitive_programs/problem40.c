#include<stdio.h>

double SquareMeter(float fArea)
{
    double dAns = 0.0;

    dAns = fArea * 0.0929;

    return dAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meter is %lf", dRet);

    return 0;
}