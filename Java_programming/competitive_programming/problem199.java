//accept file name from user and 
// creat new file of that name if it is not existing

import java.io.*;

class problem199
{
    public static void main(String args[])
    {
        String FileName = "";

        try
        {
            BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

            System.out.print("Enter file name: ");
            FileName = br.readLine();

            File fobj = new File(FileName);

            if(fobj.exists())
            {
                System.out.println("File already exists");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File created successfully");
            }
        }
        catch(Exception e)
        {
            System.out.println("Unable to create file");
        }
    }
}
