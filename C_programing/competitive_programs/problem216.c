/*A ride-hailing app calculates trip fare based on distance and 
whether the trip happened during peak hours.Peak hours increase demand,
so surcharge appilies.

Rules:
Base fare Rs.50
First 10 Km->Rs.12 per km
Beyond 10Km->Rs.15 per Km
Peak hour->20% extra on total fare

Input:
Distance in km
Beyond 10 Km-> Rs. 15 per km
Peak hour->20% extra on total fare

Input:
Distance in km(integer)
Peak hour(yes/no)

Validations:
Distance cannot be negative

Expected OutPut:
Distance:<km>
Peak Hour<Yes/no>

Total Fare:Rs.<Amount>*/

#include<stdio.h>
#include<string.h>

int main()
{
    int iDistance = 0;
    float fFare = 0;
    char PeakHour[10];

    printf("Enter distance in Km: ");
    scanf("%d", &iDistance);

    printf("Peak Hour(yes/no): ");
    scanf("%s", PeakHour);

    if(iDistance < 0)
    {
        printf("Invalid Input");
    }
    else if(strcmp(PeakHour,"Yes") !=0 &&
            strcmp(PeakHour,"No")!=0)
    {
        printf("Invalid Peak Hour Input");
    }
    else if(iDistance <= 10)
    {
        fFare = 50 + (iDistance * 12);

        if(strcmp(PeakHour, "Yes") == 0)
        {
            fFare = fFare + (fFare * 0.20);
        }
        printf("Distance: %d km\n", iDistance);
        printf("Peak Hour:%s\n", PeakHour);
        printf("Total Fare: Rs.%.2f",fFare);
    }
    else
    {
        fFare = 50 + (10 * 12)+((iDistance - 10)*15);

        if(strcmp(PeakHour,"Yes") == 0)
        {
            fFare = fFare + (fFare*0.20);
        }
        printf("Distance: %d km\n", iDistance);
        printf("Peak Hour:%s\n", PeakHour);
        printf("Total Fare: Rs.%.2f",fFare);
        
    }
    return 0;

}