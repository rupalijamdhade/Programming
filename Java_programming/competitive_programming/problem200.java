//write a program to accept directory name from user a
// and Display all names of files from that directory

import java.io.*;

class problem200
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

            String names[] = fobj.list();

            if(names == null)
            {
                System.out.println("Directory does not exist");
                return;
            }

            System.out.println("Files in directory are:");

            for(int i = 0; i < names.length; i++)
            {
                System.out.println(names[i]);
            }
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
