// write a program to find minimum of three numbers.

class Logic
{
    void FindMin(int a, int b, int c)
    {
        int min = a;
        if(b < min)
        {
            min = b;
        }
        if(c < min)
        {
            min = c;
        }
        System.out.println("Minimum number is:"+min);
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMin(3,7,2);
    }
}