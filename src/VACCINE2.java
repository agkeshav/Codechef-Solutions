import java.util.Scanner;

public class VACCINE2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int n = sc.nextInt();
            int d = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int norisk = 0;
            int risk = 0;
            for (int i = 0; i < n; i++) {
                if(arr[i]>=80 || arr[i]<=9){
                    risk++;
                }
                else {
                    norisk++;
                }
            }
            int noriskdays = 0;
            int riskdays = 0;
            if(norisk%d !=0){
             noriskdays = norisk/d + 1;
            }
            else{
                noriskdays = norisk/d;
            }
            if(risk%d !=0){
             riskdays = risk/d + 1;
            }
            else {
                riskdays = risk/d;
            }
            System.out.println(noriskdays+riskdays);

        }
    }
}
