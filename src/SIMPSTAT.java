import java.util.*;

public class SIMPSTAT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            if(k==0){
                int sum = 0;
                double ans = 0;
                for (int i = 0; i < n; i++) {
                    sum+=arr[i];

                }
                     ans = (double) sum/n;
                System.out.println(ans);
            }
            else {
                Arrays.sort(arr);
                int sum = 0;
                ArrayList<Integer> list = new ArrayList<Integer>();
                for (int i = 0; i < n; i++) {
                    list.add(arr[i]);
                }
                int j = k;
                int x = k;
                while(x-->0){
                    list.remove(list.get(0));
                }
                while(j-->0){
                    list.remove(list.get(list.size()-1));
                }
                for (int i = 0; i < list.size(); i++) {
                    sum = sum + (int)list.get(i);
                }
                float ans = (float) sum/(n-2*k);
                System.out.println(ans);
            }
        }
    }
}
