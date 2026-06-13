//write a program to display the grade of student based on marks

class Logic
{
    void DisplayGrade(int marks)
    {
        if(marks>=75)
        {
            System.out.println("Distinction");
        }
        else if(marks >= 65)
        {
            System.out.println("First Class");
        }
        else if( marks >= 35)
        {
            System.out.println("pass class");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayGrade(82);
    }
}