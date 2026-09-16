/*A couriour counter calculate delivery charge by weigth. Charges increse when
parcel is heavier

Charges:
Upto 1Kg-> Rs.50
1-5 Kg -> Rs.50 + Rs.20/kg above 1kg
Above 5Kg-> Rs.150 + Rs.30/kg above 5Kg

Input:
parcel weigth in kg(integer)

Validations:
 Weight must be > 0
 
 Expected OutPut: 
 Parcel weigth: <weight> kg
 Courier charges:Rs.<amount>
 */

#include<stdio.h>

int main()
{
    float fWeight = 0;
    float fCharges = 0;

    printf("Enter Parcel weigth  in kg: ");
    scanf("%f", &fWeight);

    if(fWeight < 0)
    {
        printf("Invalid Input: parcel weigth must be greater than 0");
    }
    else if(fWeight <= 1)
    {
        fCharges = 50;
    }
    else if(fWeight <= 5)
    {
        fCharges = 50 + ((fWeight- 1)*20);

    }
    else
    {
        fCharges = 150 + (fWeight - 5)*30;

    }
    if(fWeight > 0)
    {
        printf("Parcel weigth: %.2f kg\n",fWeight);
        printf("Courier charges: Rs.%.2f",fCharges);
    }
    return 0;
    

}