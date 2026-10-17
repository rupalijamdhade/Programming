// write a program to count how many even and odd 
//number present between 1 and N
class Logic
{
    void countEvenOddRange(int n)
    {
        int EvenCount = 0;
        int OddCount = 0;
        int iCnt;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                EvenCount++;
            }
            else
            {
                OddCount++;
            }
        }
            System.out.println("Even count="+EvenCount);
            System.out.println("Odd count="+OddCount);
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(51);
    }
}