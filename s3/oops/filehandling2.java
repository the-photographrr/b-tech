import java.io.*;
import java.util.Scanner;
class filehandling2
{
    public static void main(String args[])
    {
        File x= new File("newfilewithexception.txt");
        try{
            if(x.createNewFile())
                System.out.println("The file "+x.getName()+" has been created");
            else 
                System.out.println("The file already exists");
        }
        catch(IOException e)
        {
            System.out.println("An error has occured!!");
        }
        try{
            FileWriter fw= new FileWriter("newfilewithexception.txt");
            fw.write("This is my file handling program in Java using exception handling.");
            fw.close();
        }
        catch(IOException i)
        {
            System.out.println("An error has occured!!");
        }
        try
        {
            Scanner r= new Scanner(x);
            while(r.hasNextLine())
            {
                String a=r.nextLine();
                System.out.println(a);
            }
            r.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println("An error has occured!!");           
        }
    }
}
