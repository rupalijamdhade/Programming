//write a program to count total number of factor 0f given numbers
class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int FactorCount = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt== 0)
            {
                FactorCount++;
            }
        }
        System.out.println("Total Factors ="+FactorCount);
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}