import java.util.Scanner;

public class ATTENDU {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int n = sc.nextInt();
            String str = sc.next();
            int count = 0;
            for (int i = 0; i < str.length(); i++) {
                if(str.charAt(i)=='1'){
                    count++;
                }
            }
            int max = 120-n+count;
            float per = (max*100)/120;
            if(per>=75){
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
