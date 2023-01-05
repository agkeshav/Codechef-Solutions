
    import java.util.Scanner;

    public class Main1 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while (t-->0){
                int n = sc.nextInt();
                int[] arr = new int[n];
                for (int i = 0; i < n; i++) {
                    arr[i] = sc.nextInt();
                }
                int ele = frequent(arr,n);
                int frequency = 0;
                for (int i = 0; i < n; i++) {
                    if(arr[i]==ele){
                        frequency++;
                    }
                }
                if(frequency==1){
                    System.out.println(1);
                }
                else if(frequency==2){
                    System.out.println(2);
                }
                else {

                }

            }
        }
        public static int frequent(int[] arr, int n)
        {
            int maxcount = 0;
            int ele = 0;
            for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = 0; j < n; j++) {
                    if (arr[i] == arr[j]) {
                        count++;
                    }
                }
                if (count > maxcount) {
                    maxcount = count;
                    ele = arr[i];
                }
            }
            return ele;
        }
    }


