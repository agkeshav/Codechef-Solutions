import java.util.Scanner;

public class CSTOCK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int s = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int l = (100+c)*s;
            int ans = l/100;
            if(ans>=a && ans<=b){
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }

        }
    }
}
