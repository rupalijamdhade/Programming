\\ write a program to display all factors of given numbers

class Logic
{
    void DisplayFactors(int num)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0)
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
        obj.DisplayFactors(12);
    }
}