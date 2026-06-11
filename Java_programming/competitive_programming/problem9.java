//write a program to find the sum of even and odd digits seperately in a number
class Logic
{
    void sumEvenOddDigits(int n)
    {
        
        int iDigit = 0;
        int evenSum = 0;
        int oddSum = 0;

        while(n != 0)
        {
            iDigit = n % 10;

            if(iDigit % 2 == 0)
            {
                evenSum = evenSum + iDigit;
            }
            else
            {
                oddSum = oddSum + iDigit;
            }
            n = n / 10;
        }
        System.out.println("Sum of even digits:"+evenSum);
        System.out.println("sum of odd digits:"+oddSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}