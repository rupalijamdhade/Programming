//write java program to accept file name from user and open that file
//and display the contents on screen

import java.io.*;

class problem197
{
    public static void main(String args[])
    {
        String FileName = "";

        System.out.print("Enter file name: ");

        try
        {
            BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

            FileName = br.readLine();

            FileReader fr = new FileReader(FileName);

            int ch = 0;

            while((ch = fr.read()) != -1)
            {
                System.out.print((char)ch);
            }

            fr.close();
        }
        catch(Exception e)
        {
            System.out.println("Unable to open file");
        }
    }
}
hello