// write a program to print all even numbers up to N

class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}