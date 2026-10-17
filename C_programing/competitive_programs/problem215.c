/*A tax portal calculates income tax based on annual income using
progrssive slabs.only the amount in slab is taxed at that slab's rate

Slabs:
Upto Rs. 2,50,000->0%
Rs.2,50,000 to 5,00,000->5%
Rs.5,00,000 to 10,00,000->20%
Rs.10,000->30%

Input:
Annual Income(integer)

Validation:
Incaome can not ne negative

Expected Output

Annual Income: Rs.<Income>
Total Tax Payble:Rs.<Tax>
*/

#include<stdio.h>

int main()
{
    int iIncome = 0;
    float fTax = 0;

    printf("Enter annual income: ");
    scanf("%d", &iIncome);

    if(iIncome < 0)
    {
        printf("Invalid Input");
    }
    else if(iIncome <= 250000)
    {
        fTax = 0;
    }
    else if(iIncome <= 500000)
    {
        fTax = (iIncome - 250000)*0.05;
    }
    else if(iIncome <= 1000000)
    {
        fTax = (250000*0.05)+
                ((iIncome - 500000)*0.20);
    }
    else
    {
        fTax = (250000*0.05)+
                (500000*0.20)+
                ((iIncome - 1000000)*0.30);
    }
    if(iIncome >= 0)
    {
        printf("Annual Income:Rs.%d\n", iIncome);
        printf("Total tax Payable:Rs.%.2f\n",fTax);
    }
    return 0;
}
