//accept dirctory name from user and display all names of file
//and size of each file on screen

import java.io.*;

class problem205
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

            File files[] = fobj.listFiles();

            if(files == null)
            {
                System.out.println("Directory does not exist");
                return;
            }

            System.out.println("File Name\tSize");

            for(int i = 0; i < files.length; i++)
            {
                if(files[i].isFile())
                {
                    System.out.println(
                        files[i].getName() + "\t" + files[i].length() + " bytes");
                }
            }
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
