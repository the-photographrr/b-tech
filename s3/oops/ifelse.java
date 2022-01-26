import java.io.*;
import java.util.Scanner;

class ifelse {

  public static void main(String[] args) {

     int number = 0;

    Scanner sc= new Scanner(System.in);
    // declaring double type variables
    System.out.println("Enter a number : ");
    number=sc.nextInt();

    if (number%2 == 1) {
      System.out.println("WEIRD") ;
    }
    else if ((number >= 2)&&(number <=5 )) {
      System.out.println("NOT WEIRD");
    }
     else if ( (number >= 6)&&(number <= 20) ) {
      System.out.println("WEIRD");
    }
        else if (number >  20) {
      System.out.println("NOT WEIRD");
    }
    else {
      System.out.println("The number is 0");
    }
    }
  }
