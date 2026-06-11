// write a program  to print all odd numbers up to N

class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt <= n; iCnt++)
        if(iCnt %2 != 0)
        {
            System.out.println(iCnt);
        }
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}