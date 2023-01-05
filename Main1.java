import java.util.*;
import java.lang.*;
import java.io.*;
public class Main1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            if(n==1){
                System.out.println("YES");
            }
            if(n%k==0 && n/k <=1){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
            }
        }
    }
}
