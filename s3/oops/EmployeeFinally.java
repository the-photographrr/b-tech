import java.io.*;
import java.util.Scanner;
class EmployeeFinally
{
    String name,emp_code;
    double salary;
    int age;
    void idk(int k) throws ArithmeticException
    {
        System.out.println(salary/k);
    }
}
class empexc
{
    public static void main(String args[])
    {
        EmployeeFinally employee= new EmployeeFinally();
        Scanner sc= new Scanner(System.in);
        System.out.println("input name:");
        employee.name=sc.nextLine();
        System.out.println("input age:");
        employee.age=sc.nextInt();
        System.out.println("input Salary:");
        employee.salary=sc.nextDouble();
        System.out.println("input a number:");
        int a=sc.nextInt();
        try{
            System.out.print("Salary/number=");
            employee.idk(a);
        }
        catch(ArithmeticException m)
        {
            System.out.println("Enter a non zero number");
        }
        System.out.println("Input another number...");
        int b= sc.nextInt();
        try{
            char x=employee.name.charAt(b);
        }
        finally{
            System.out.println(" not necessary...");
            System.out.println("wcan u stay");
            if(employee.age>=60)
                throw new ArithmeticException("fired");
            else
                System.out.println("You can continue");
            sc.close();
        }
    }
}
