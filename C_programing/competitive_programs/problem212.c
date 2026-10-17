/*A bank wants to quickly decide wheather a customer is
 eligible for a personal loan.
 The System check the applicant's details and either approve the loan
 or reject with exact reason.

 Eligibility Conditions:
 Age 21 to 60 inclusive
 Monthly income >= Rs.25000
 Creadit score >= 700
 Must NOT have an existing unpaid loan

 Input:
 Age
 Monthly income
 Credit score
 Existing unpaid loan(Yes/No)

 Validations:

 Age/income/score must be non-negative
 Yes/No must be valid

 Expected Output:
 Loan Approved
 Or
 Loan Rejected:<specific Reason>
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int iAge = 0;
    int iIncome = 0;
    int iScore = 0;
    char Loan[10];

    printf("Enter Age: ");
    scanf("%d", &iAge);

    printf("Enter MonthlyIncome: ");
    scanf("%d",&iIncome);

    printf("Enter creditScore: ");
    scanf("%d",&iScore);

    printf("Existing unpiad loan(yes/no): ");
    scanf("%s",Loan);

    if(iAge < 0 || iIncome < 0 || iScore < 0)
    {
        printf("Invalid Input");
    }

    else if(strcmp(Loan,"yes")!= 0 && strcmp(Loan,"no")!= 0 )
    {
        printf("Invalid Loan status\n");
    }

    else if(iAge < 21 || iAge > 60 )
    {
        printf("Lone is rejected: Age is not eligible\n");
    }

    else if(iIncome < 25000)
    {
        printf("Loan is rejected:Income is too Low\n");
    }

    else if(iScore < 700)
    {
        printf("Loan is Rejected: Credit score is too low\n");
    }
    else if(strcmp(Loan, "Yes") == 0)
    {
        printf("Loan Rejected: Existing unpaid loan\n");
    }
    else
    {
        printf("Loan Approved\n");
    }
    return 0;

}