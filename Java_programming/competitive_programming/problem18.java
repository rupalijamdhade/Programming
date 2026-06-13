// write a program to check whether a number is a perfect or not.

class Logic
{
    void CheckPerfect(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt < n; iCnt++)
        {
            if(n % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if (iSum == n)
        {
            System.out.println(n+"is perfect number");
        }
        else
        {
            System.out.println(n+"is not a perfect number");
        }
    }

}
class Program
{
    public static void main(String args[])
    {
        Logic obj =  new Logic();
        obj.CheckPerfect(6);
    }
}