// Write a program to calculate the product of digits of a number
class Logic
{
    void productofDigit(int num)
    {
        int iDigit = 0;
        int iproduct = 1;
        while(num != 0)
        {
            iDigit = num % 10;
            iproduct = iproduct * iDigit;
            num = num / 10;
        }
        System.out.println("product of digits="+iproduct);
        
    }
}
class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productofDigit(234);
    }
}