import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int a = mostFrequent(arr,n);
            for (int i = 0; i < n; i++) {
                if(arr[i]!=a){
                    System.out.println(i+1);
                    break;
                }
            }

        }
    }
    static int mostFrequent(int arr[], int n)
    {
        // Sort the array
        int[] arr1 = new int[n];
        arr1 = Arrays.copyOf(arr,n);
        Arrays.sort(arr1);

        // find the max frequency using linear traversal
        int max_count = 1, res = arr1[0];
        int curr_count = 1;

        for (int i = 1; i < n; i++) {
            if (arr1[i] == arr1[i - 1])
                curr_count++;
            else
                curr_count = 1;

            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr1[i - 1];
            }
        }
        return res;
    }
}
