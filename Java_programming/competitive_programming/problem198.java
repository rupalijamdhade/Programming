import java.io.*;

class problem198
{
    public static void main(String args[])
    {
        String FileName = "";
        String Data = "";

        try
        {
            BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

            System.out.print("Enter file name: ");
            FileName = br.readLine();

            System.out.print("Enter data: ");
            Data = br.readLine();

            FileWriter fw = new FileWriter(FileName, true);

            fw.write(Data);

            fw.close();

            System.out.println("Data written successfully");
        }
        catch(Exception e)
        {
            System.out.println("Unable to open file");
        }
    }
}
