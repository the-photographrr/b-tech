import java.io.*;
import java.util.Scanner;
class filehandle
{
    public static void main(String args[])
    {
        File f= new File("newfile.txt");
        try{
            if(f.createNewFile())
                System.out.println("The new file "+f.getName()+" has been created");
            else 
                System.out.println("The file  exists");
        }
        catch(Exception e)
        {
            System.out.println("An error has occured!!");
        }
        try{
        FileWriter fw= new FileWriter("newfile.txt");
        fw.write("This is my first file handling program in Java.");
        fw.close();
        }
        catch(Exception e)
        {
            System.out.println("An error has occured!!");
        }
        try
        {
            Scanner r= new Scanner(f);
            while(r.hasNextLine())
            {
                String a=r.nextLine();
                System.out.println(a);
            }
            r.close();
        }
        catch(Exception e)
        {
            System.out.println("An error has occured!!");           
        }
    }
}
