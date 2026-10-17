/*A scholarship commitee uses a strict checklist. only students who 
meet all academic and financial conditions qualify

Conditions:
Marks >= 80%
Attandance >= 75%
Family Income <= Rs. 300000

Input:
Marks percentage(integer)
Attendance percent(integer)
Family Income(integer)

Validation:

Marks and attendance must be 0 - 100
Income Cannot be negative

Expected OutPut:
Scholarship Approved
OR
Scholarship Rejected:<Reason>

*/
#include<stdio.h>

int main()
{
    int iMarks = 0;
    int iAttendance = 0;
    int iFamilyIncome = 0;

    printf("Enter Marks: ");
    scanf("%d",&iMarks);

    printf("Enter Attendance: ");
    scanf("%d",&iAttendance);

    printf("Enter Family Income: ");
    scanf("%d",&iFamilyIncome);

    if(iFamilyIncome < 0 )
    {
        printf("Invalid Input:Family Income can not be negative\n");

    }
   
    else if(iAttendance < 0 || iAttendance > 100)
    {
        printf("Invalid Input: iAttendance must be in between 0-100\n");
    }

    else if(iMarks < 0 || iMarks > 100)
    {
        printf("Invalid Input: iMarks must be inbetween 0-100\n ");
    }

    else if(iMarks >= 80 && iAttendance >= 75 && iFamilyIncome <= 300000)
    {
        printf("Scholarship Approved\n");
    }
    else
    {
        if(iMarks < 80)
        {
            printf("Scholarship Rjected: less percentage\n");
        }
        

        else if(iFamilyIncome < 300000)
        {
            printf("Schoarship Rejected: high Family Income\n");
        }
        else if(iAttendance < 70)
        {
            printf("Scholarship Rejectes: Attendance is low\n");
        }
    }
    return 0;

}