//accept two file names from user and open first file and
//  create new file(second name) and 
// copy the data from first file into newly created file

import java.io.*;

class problem201
{
    public static void main(String args[])
    {
        String Source = " ";
        String Destination = " ";

        try
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            System.out.print("Enter source file name: ");
            Source = br.readLine();

            System.out.print("Enter destination file name: ");
            Destination = br.readLine();

            FileReader fr = new FileReader(Source);
            FileWriter fw = new FileWriter(Destination);

            int ch = 0;

            while((ch = fr.read()) != -1)
            {
                fw.write(ch);
            }
            fr.close();
            fw.close();

            System.out.println("Data copied successfully");
        }
        catch(Exception e)
        {
            System.out.println("Unable to copy file");
        }
    }
}