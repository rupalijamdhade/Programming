//write a program to chrck whether a number is prime or not

class Logic
{
    void checkPrime(int num)
    {
        if(num % 2 != 0)
        {
            System.out.println("prime number");
        }
        else
        {
            System.out.println("not prime number");
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}