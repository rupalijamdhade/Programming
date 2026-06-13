//write a program to find  the largest digit in given number

class Logic
{
    void FindLargrstDigit(int num)
    {
        int iMax = 0;
        int iDigit = 0;
        {
            while(num !=0 )
            {
                iDigit = num % 10;
                if (iDigit > iMax)
                {
                    iMax = iDigit;
                }
                num = num/10;
            }
            System.out.println("Largest digit is:"+iMax);
        }

    }
    class Program
    {
        public static void main(String args[])
        {
            Logic obj = new Logic();
            obj.FindLargrstDigit(8796425);
        }
    }
}



        