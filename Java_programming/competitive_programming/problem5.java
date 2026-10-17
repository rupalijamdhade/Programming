// write a program to print the multipication table of a number

class Logic
{
    void printTable(int num)
    {
        int iMult=1;
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(num+"*"+iCnt+"="+(num*iCnt));
        }

    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}