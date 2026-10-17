/*A warehouse has a product in stock.Every time a custmoer place an order,
 the system must check if enough stock exists. if possible,fulfill
 it and update remaining stock.if stock become very low,show alert

Rules:
If requested quantity > available stock->order fails
else deduct quantity
if remaining stock < 5-> print low stock alert

input:
Current stock(integer)
Requested quantity(integer)

Validation:
Stock cannot be negative
Requested quantity must be > 0

Expected OutPut:
Order Processed SuccessFully.
Remaining quantity must be > 0
if remaining <5 also print: Low Stock Alert!
if faild: Order Failed: InSufficient Stock
*/
#include<stdio.h>

int main()
{
    int iStock = 0;
    int iQuantity = 0;
    int iRemaning = 0;

    printf("Enter current stock: ");
    scanf("%d",&iStock);

    printf("Enter Requested quantity: ");
    scanf("%d",&iQuantity);

    if(iStock < 0)
    {
        printf("Invalid Input : Stock cannot be negative \n");
    }
    else if(iQuantity <= 0)
    {
        printf("Invalid Input: Requested quantity must be greater than zero\n");
    }
    else if(iQuantity > iStock)
    {
        printf("order failed:Insufficient stock\n");
    }
    else
    {
        iRemaning  = iStock - iQuantity;

        printf("Order Processed Suceessful.\n");
        printf("Remaining Stock: %d\n",iRemaning );

        if(iRemaning < 5)
        {
            printf("Low Stock Alert\n");
        }
    }
    return 0;

}