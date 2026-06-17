/*
    iRow = 4
    iCol = 4

    $   $   $   $   
    $   $   $   $   
    $   $   $   $   
    $   $   $   $   

*/
import java.util.*;

class pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("$\t");
            }
            System.out.println();
        }
       
    }
}
class program197
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of coloumns:");
        iValue2 = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Display(iValue1, iValue2); 
    }
}