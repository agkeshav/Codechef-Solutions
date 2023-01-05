import java.util.*;
import java.lang.*;
import java.io.*;
public class Chef_and_Bored_Games{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int sum = 0;
           int i=1;
           int j=1;
           while(i<=n){
            
            sum+=(i*i);
            i = 2*j-1;
            j++;
           }
            int a = n*(n+1)/2;
            int ans = a+sum;
            System.out.println(ans);
            
        }
    }
}