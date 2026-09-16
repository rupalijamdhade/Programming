/*A phone OS shows different battery warnnings
The user wantsna program that prints the correct battery stautus

Rules:
Battery <= 5%-> CriticL
Battery <= 15%-> Low
otherwise-> Normal

Input:
Battery Percentage(integer)

validaton: 
0 to 100 only

Expected OutPut:

Battery percentage(intger):<value>%
Status: <Ctitical/Low/Normal>

*/

#include<stdio.h>

int main()
{
    int iBattery = 0;

    printf("Enter Battery Percentage: ");
    scanf("%d", &iBattery);

    if(iBattery < 0 || iBattery > 100)
    {
        printf("Invalid Input");
    }
    else if(iBattery <= 5)
    {
        printf("Battery Percentage: %d%%\n", iBattery);
        printf("Status: Critical\n");
    }
    else if(iBattery <= 15)
    {
        printf("Battery Percentage: %d%%\n", iBattery);
        printf("Status: Low\n");
    }
    else
    {
        printf("Battery Percentage: %d%%\n", iBattery);
        printf("Status: Normal\n");
    }

    return 0;
}