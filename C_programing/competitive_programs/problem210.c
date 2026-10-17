/*An e-commarace platform wants to compute final payble amount at checkout
DiCount are based on purchase amount, and premium members receive
an extra discount after the main discount.
Discount Rules:
Amount > 5000->20% discount
Amount> 2000-> 10% discount
otherwise->no discount
premium members->extra 5% discount on the discounted amount

Input:
Purchase amount(integer)
Membership type:Premium/Regular

Validation:
Amount must be > 0
Membership must be valid

Expected Output:
Origional Amount:Rs<Amount>
Total Discount:Rs<discount>
Final payable Amount:Rs.<FinalAmount>
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int Amount = 0;
    int Discount = 0;
    int FinalAmount = 0;
    char Membership[20];

    printf("Enter purchase amount: ");
    scanf("%d", &Amount);

    printf("Enter membership type: ");
    scanf("%s", Membership);

    if(Amount <= 0)
    {
        printf("Invalid Amount");
    }
    else if(strcmp(Membership, "Premium")!= 0 && 
    strcmp(Membership, "Regular")!= 0)
    {
        printf("Invalid Membership");
    }
    else
    {
        if(Amount > 5000)
        {
            Discount = Amount * 20 / 100;

        }
        else if(Amount > 2000)
        {
            Discount = Amount * 10 / 100;
        }
        else
        {
            Discount = 0;
        }
        FinalAmount = Amount - Discount;
        if(strcmp(Membership, "Premium") == 0)
        {
            int PremiumDiscount = FinalAmount * 5 / 100;
            Discount = Discount + PremiumDiscount;
            FinalAmount = FinalAmount - PremiumDiscount;
        }
        printf("original Amount:Rs.%d\n", Amount);
        printf("Total Discount: Rs.%d\n", Discount);
        printf("Final Payble Amount:Rs.%d\n", FinalAmount);
    }
    return 0;
}