// write a program to check whether a number is positive ,negative,or zero.

class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Positive");
        }
        else if(num < 0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Zero");
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}