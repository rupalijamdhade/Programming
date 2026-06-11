//program to find the sum of digits of number.


class Logic
{
    void SumofDigits(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo!=0)
        {
            iDigit = iNo % 10;
            iSum =iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Sum of digits is:"+iSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumofDigits(1234);
    }
}

    
    