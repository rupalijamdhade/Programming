/*write a recursive program which accepts number from user
and return summation of its digits
*/

#include<stdio.h>

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }
    return (iNo % 10) + Sum(iNo / 10);


}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf(" sum of digits is : %d\n", iRet);

    return 0;

}