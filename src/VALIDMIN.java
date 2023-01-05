import java.util.Scanner;

public class VALIDMIN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            if(x==y && y==z){
                System.out.println("YES");
            }
            else if(x==y && x!=z && y!=z){
                if(x<z){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            else if(x!=y && x==z && y!=z){
                if(z<y){
                    System.out.println("YES");
                }
                else {
                    System.out.println("NO");
                }
            }
            else if(x!=y && x!=z && y==z){
                if(x<y){
                    System.out.println("NO");
                }
                else {
                    System.out.println("YES");
                }
            }
            else{
                    System.out.println("NO");
            }
        }
    }
}
