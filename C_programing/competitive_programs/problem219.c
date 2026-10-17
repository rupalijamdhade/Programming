/*A customer enters a store with a fixed budget.they pick items one by one
in given order.The cashier wants to know how many items can be purchased
before money becomes insufficient.

Input:
Budget amount
Number of items N
N item prices

Validations:

Budget >= 0;;
N >= 0
Each price > 0;


Expected OutPut:

Item Purchased:<Count>
Remaining Balance:Rs.<Amount>
*/

#include<stdio.h>

int main()
{
    int iBudget = 0;
    int iNumberOfItems = 0;
    int iPrice = 0;
    int iCount = 0;
    int iRemaining = 0;
    int i = 0;

    printf("Enter Budget: ");
    scanf("%d", &iBudget);

    printf("Enter number of items: ");
    scanf("%d", &iNumberOfItems);

    if(iBudget < 0)
    {
        printf("Invalid Input: Budget cannot be negative");
    }
    else if(iNumberOfItems < 0)
    {
        printf("Invalid Input: Price must be greater than 0");
    }
    else
    {
        iRemaining = iBudget;

        for(i = 1; i <= iNumberOfItems ;i++)
        {
            printf("Enter price of item %d:", i);
            scanf("%d",&iPrice);

            if(iPrice <= 0)
            {
                printf("Invalid Input: Price must be greater than 0");
                return 0;
            }
            else if(iPrice <= iRemaining)
            {
                iRemaining = iRemaining - iPrice;
                iCount++;
            }
            else
            {
                break;
            }
        }
        printf("Item Purchased:%d\n",iCount);
        printf("Remaining Balance: Rs.%d\n",iRemaining );
    }
    return 0;
}