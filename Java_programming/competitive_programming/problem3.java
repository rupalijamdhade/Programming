// write a program to  find the maximum of two numbers.

class Logic
{
    void FindMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println("a is greater");
        }
        else
        {
            System.out.println("b is greater");
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20,15);
    }
}