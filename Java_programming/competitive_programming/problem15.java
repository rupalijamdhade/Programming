//write a program to calculate the power of a number using loops.

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0;
        int power = 1;
        
        for(iCnt = 1;iCnt <= exp;iCnt++)
        {
            power = power * base;
        }
        System.out.println("Power is:"+power);
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}