// write a program to print each digit of a number separately

 class Logic
 {
    void printDigits(int num)
    {
        int iDigit = num;

        while(num !=0)
        {
            iDigit = num % 10;
            System.out.println(iDigit);
            num = num /10 ;
        }
       
    }
 }

 class Program
 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDigits(98765);
    }
}