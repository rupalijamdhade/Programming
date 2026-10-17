/*A univesity wants to generate student results automatically
Each student has marks in five subjects, each out of 100
the result should clearly shows whether the student failed in any subject
and ,if passed, the final classication based on average marks

Rules:
If marks in any subject < 35 -> student is fail

If student passes all subjects, calculate average and classify:
Average >= 75->Distinction
Average>= 60->firstClass
Average >= 50-> Second Class
Average <= 50->Pass

Input:
Five integer(Marks in five subjects)

Validation:
Each marks must be between 0 and 100

Expected Output:
If fail:Result: Fail

Else:
Avearage Marks<avg>
Final Result:<Classification>
*/

#include<stdio.h>

int main()
{
    int Marks[5];
    int i = 0;
    int Fail = 0;
    int Total = 0;
    float Average = 0.0f;

    for(i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d:", i + 1);
        scanf("%d", &Marks[i]);

        if(Marks[i] < 0 || Marks[i] >100)
        {
            printf("Invalid marks: marks should be between 0 and 100\n");
            return 0;
        }
        if(Marks[i] < 35)
        {
            Fail = 1;
        }
        Total = Total + Marks[i];
    }

    if(Fail == 1)
    {
        printf("Result: Fail\n");
    }
    else
    {
        Average = Total/5.0;

        printf("Average Marks:%f\n",Average);

        if(Average >= 75)
        {
            printf("Final Result: Distinction\n");
        }
        else if(Average >= 60)
        {
            printf("Final Result: First class\n");
        }
        else if(Average >= 50)
        {
            printf("Final Result: Second Class\n");
        }
        else
        {
            printf("Final Result: Pass\n");
        }
    }
    return 0;
}