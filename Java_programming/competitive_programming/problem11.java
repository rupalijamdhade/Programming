//write a program to check wherther a given year is  a leap year or not

class Logic
{
    void checkLeapYear(int Year)
    {
        if((Year % 100 == 0)||(Year % 4 == 0 && Year % 100 != 0))
        {
            System.out.println(Year+ "is leap year");
        }
        else
        {
            System.out.println( Year+ "is not leap year");
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}