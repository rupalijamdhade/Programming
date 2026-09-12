//accept filename from user and calculate checksum of that file
//and display on screen

import java.io.*;
import java.util.zip.*;

class problem204

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

            FileInputStream fis = new FileInputStream(FileName);

            CRC32 crc = new CRC32();

            int ch = 0;

            while((ch = fis.read()) != -1)
            {
                crc.update(ch);
            }

            fis.close();

            System.out.println("Checksum is: " + crc.getValue());
        }
        catch(Exception e)
        {
            System.out.println("Unable to open file");
        }
    }
}