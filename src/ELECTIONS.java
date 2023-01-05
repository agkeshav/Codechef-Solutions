import java.util.*;
import java.lang.*;
import java.io.*;
public class ELECTIONS{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int xa = sc.nextInt();
            int xb = sc.nextInt();
            int xc = sc.nextInt();
            int[] arr = {xa,xb,xc};
            int ans = 0;
            for (int i = 0; i < 3; i++) {
                if(arr[i]>=51){
                    ans = i;
                    break;
                }
            }
            if(ans==0){
                System.out.println("A");
            }
            else if(ans == 1){
                System.out.println("B");
            }
            else if(ans == 2){
                System.out.println("C");
            }
            else{
                System.out.println("NOTA");
            }



        }
    }
}