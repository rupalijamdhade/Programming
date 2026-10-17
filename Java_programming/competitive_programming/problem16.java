// write a program to find sum of all even numbers up to N

class Logic
{
    void SumEvenNumers(int n)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            iSum = iSum + iCnt;
        }
        System.out.println("Sum="+iSum);

    }
}
class Program
{
    public static void main (String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenNumers(15);
    }
}