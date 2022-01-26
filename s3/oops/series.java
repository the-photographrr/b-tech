import java.util.Scanner;
import java.io.*;
class Solution
{
    public static void main(String []args)
    {
        int a,b,n,l,o,x,i,k;
        Scanner m = new Scanner(System.in);
         x=m.nextInt();
        for( i=0;i<x;i++){
              a = m.nextInt();
              b = m.nextInt();
              n = m.nextInt();
              l=1;
              o=a;
            for(k=0;k<n;k++){
                o=o+l*b;
                System.out.println(o);
                l=l<<1;
                System.out.println(' ');
            }
            System.out.println();
        }
        
    }
}