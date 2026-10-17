//take string from user convert it into lower case

//Input: my NAME iS AMIt
//output: my name is amit

import java.util.*;

class program740
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        str = str.toLowerCase();

        System.out.println(str);
    }
}