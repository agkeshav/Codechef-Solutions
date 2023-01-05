import java.util.Scanner;

public class ELEVSTRS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int n = sc.nextInt();
            int v1 = sc.nextInt();
            int v2 = sc.nextInt();
            float ele = (float)n*2/v2;
            float d = (float)((n*Math.sqrt(2))/v1);
            if(ele>d){
                System.out.println("Stairs");
            }
            else {
                System.out.println("Elevator");
            }
        }
    }
}
