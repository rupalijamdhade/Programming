//accept directory name from user and 
// create that diectory

import java.io.*;

class problem203
{
    public static void main(String args[])
    {
        String DirName = " ";

        try
        {
            BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

            System.out.print("Enter directory name: ");
            DirName = br.readLine();

            File fobj = new File(DirName);

            if(fobj.mkdir())
            {
                System.out.println("Directory created successfully");

            }
            else
            {
                System.out.println("Directory already exist or can not be created");
            }
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}