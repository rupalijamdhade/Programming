/*In your college library, students borrow books for exams and assignmnents
the librarian wants an automatic fine calculator so that staff dont need to calculate 
fine manually for every students
as per policy a student can keep a barrowed book for up to 7 days without any penalty
if the book is return late, the fine depends on how many days the student kept book in total 

Fine Rules:
if the book is returned within 7 Days --> No fine
if total days are 8 to 12 --> Rs 5 per day for each day beyond 7
if total days are more than 12-->
rs 5 per day for days 8-12
rs 10 perday for each day beyond 12

Input:
one integr, total number of days the book was kept(dayskept)
Validation:
if dayskept < 0 --> invalid Input

Expected Output:
if dayskept <= 7:Return on time, No fine applicable
else: Total fine to be paid: rs<fineAmmount>
*/ 

#include<stdio.h>

int main()
{
   int DaysKept = 0;
   int Fine = 0;
   
   printf("Enter number of days book was kept: ");
   scanf("%d",&DaysKept);

   if(DaysKept < 0)
   {
    printf("Invalid Input");
   }

   else if(DaysKept <= 7)
   {
    printf("Return on time, no fine applicable\n");
   }

   else if(DaysKept <= 12)
   {
    Fine = (DaysKept - 7)*5;
    printf("Total fine to be paid: Rs %d\n",Fine);
   }

   else
   {
    Fine = (5 * 5) + ((DaysKept - 12)*10);

    printf("Total fine to be paid: Rs %d\n",Fine);
   }
   return 0;

}