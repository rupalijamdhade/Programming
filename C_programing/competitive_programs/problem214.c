/*A traffic police app records whether a rider voilated rules.
Each violation has a fixed fine. if multiple violation happen,
fine should be added

Fines:
No helmet->500
No License-> 1000
Overspidding-> 1500;

Input;
Headmelt worn(yes/no)
license available(yes/no)
OverSpeeding(yes/no)

Validation: 
Input must be yes/no only

Expected output:
Total Fine Amount: Rs.<Amount>*/

#include<stdio.h>
#include<string.h>

int main()
{
    char Helmet[10];
    char License[10];
    char Speeding[10];
    int iFine = 0;

    printf("Helmet worn(Yes/No): ");
    scanf("%s", Helmet);

    printf("License available(Yes/No): ");
    scanf("%s",License);

    printf("OverSpeeding(Yes/No): ");
    scanf("%s",Speeding);

    if((strcmp(Helmet, "Yes") != 0 && strcmp(Helmet, "No") != 0) ||
       (strcmp(License, "Yes") != 0 && strcmp(License, "No") != 0) ||
       (strcmp(Speeding, "Yes") != 0 && strcmp(Speeding, "No") != 0))
    {
        printf("Invalid Input");
    }
    else
    {
        if(strcmp(Helmet,"No") == 0)
        {
            iFine = iFine + 500;
        }
        if(strcmp(License, "No") == 0)
        {
            iFine = iFine + 1000;
        }
        if(strcmp(Speeding, "Yes")== 0)
        {
            iFine = iFine + 1500;
        }
        printf("Total Fine Amount: %d\n",iFine);
    }
    return 0;
}