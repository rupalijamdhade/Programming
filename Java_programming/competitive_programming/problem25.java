// write a program to print all numbers from 1 to N
//that are divisible by both 2 and 3.

class Logic
{
    void printdivisibleby2and3(int num)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if((iCnt % 2 == 0)&&(iCnt % 3 == 0))
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
        obj.printdivisibleby2and3(30);
    }
}