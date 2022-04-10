
import java.util.*;
import java.lang.*;
import java.io.*;
public class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            long a = sc.nextLong();
            long b =sc.nextLong();
            if(b==1 || a==1){
                System.out.println(-1);
            }
            else if(hcf(a,b)==1){
                System.out.println(1);
            }
            else{
                System.out.println(0);
            }
        }
    }
    public static long hcf(long a,long b){
        while(b%a !=0){
            long t = b%a;
            b = a;
            a = t;
        }
        return a;
    }
}
