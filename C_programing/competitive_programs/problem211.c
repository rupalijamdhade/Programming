/*A shopping mall parking record entry and exit duration in hours.
The parking System calculates charges based on total hours a vehical stayed.
Long-Duration parking attracts additional penalty

Rules:
First 2 hours->Rs.20(flat)
After 2 Hour-> Rs.10 per extra hour
If total hour > 10-> add Rs.50 penalty

Input:
Total Parking hours(integer)
Valifations:
Hours cannot be negative

Expected Output:
Total Parking Duration:<hours>
Total Parking Fee:Rs.<Amoumt>
*/

#include<stdio.h>

int main()
{
    int iHours = 0;
    int iAmount = 0;

    printf("Enter total parking hours: ");
    scanf("%d", &iHours);

    if(iHours < 0)
    {
        printf("Invalid Input\n");
    }
    else if(iHours <= 2)
    {
        iAmount = 20;
    }
    else if(iHours <= 10)
    {
        iAmount = 20 + ((iHours - 2) * 10);
    }
    else
    {
        iAmount = 20 + ((iHours - 2) * 10) + 50;
    }

    if(iHours >= 0)
    {
        printf("Total Parking Duration: %d hours\n", iHours);
        printf("Total Parking Fee: Rs.%d\n", iAmount);
    }

    return 0;
}