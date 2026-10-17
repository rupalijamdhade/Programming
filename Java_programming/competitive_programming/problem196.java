//write java program to accept file name from user
//  and open that file

import java.io.*;

class problem196
{
    public static void main(String args[])
    {
        String FileName = "";

        System.out.print("Enter file name: ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try
        {
            FileName = br.readLine();

            File fobj = new File(FileName);

            if(fobj.exists())
            {
                System.out.println("File opened successfully");
            }
            else
            {
                System.out.println("File does not exist");
            }
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
