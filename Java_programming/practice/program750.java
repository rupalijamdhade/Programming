// Input:india is my county i live in india
//Output: frequency of India words

import java.util.*;

class program750
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");

        int iCount = 0; 

        for(int i = 0; i < Tokens.length; i++)
        {
            if(Tokens[i].equals("India"))
            {
                iCount++;
            }
        }
        System.out.println("Frequency of words is :"+iCount);
    }
}

    