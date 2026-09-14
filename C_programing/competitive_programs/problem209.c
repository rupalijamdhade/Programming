/*An electricity company bills customers monthly based on how many 
unit they consumed.The billing is progressive, meaning units are charged
in slabs.The company wants a program to calculate bill accurately for any 
consumption

Slabs:
First 100 units->Rs.5 per unit
Next 100 units(101-200)->Rs.7 per unit
Above 200 units->Rs.10 per unit

Input:
One integer:units consumed

Validation:
Units cannot be negative

Expected OutPut:

Total Units Consumed:<units>
Total Electricity Bill: Rs.<amount>*/

#include<stdio.h>

int main()
{
    int UnitConsumed = 0;
    int ElectricityBill = 0;

    printf("Enter the number of units: ");
    scanf("%d", &UnitConsumed);

    if(UnitConsumed < 0)
    {
        printf("Invalid Input");
    }

    else if(UnitConsumed <= 100)
    {
        ElectricityBill = UnitConsumed*5;
    }
    else if(UnitConsumed <= 200)
    {
        ElectricityBill = (100 * 5) +  ((UnitConsumed-100)*7);
    }

    else
    {
       ElectricityBill = (100*5) + (100*7)+((UnitConsumed-200)*10);
    }
    if(UnitConsumed >= 0)
    {
        printf("Total Units Consumed: %d\n", UnitConsumed);
        printf("Total Electricity Bill: Rs.%d\n",ElectricityBill);
    }
    return 0;
}