//accept the file name from user and 
// check weather that file is regular file or not


import java.io.*;

class problem202

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

            if(fobj.isFile())
            {
                System.out.println("It is a regular file");
            }
            else
            {
                System.out.println("It is not a regular file");
            }
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
