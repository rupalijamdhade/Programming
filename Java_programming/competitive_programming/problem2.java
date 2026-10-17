// write a program to check whether a number is a palindrom or not

class Logic
{
    void checkpalindrome(int iNo)
    {
        int iTemp = iNo;
        int iRev = 0;
        int iDigit =0;

        while(iNo!=0)
        {
            iDigit = iNo % 10;
            iRev = (iRev*10) + iDigit;
            iNo = iNo/10;
        }
        if(iTemp == iRev)
        {
            System.out.println("Palindrome number");
        }
        else
        {
            System.out.println("not palindrome number");
        }

    }

}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkpalindrome(121);
    }
}