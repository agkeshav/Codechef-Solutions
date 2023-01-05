import java.util.*;

import javax.xml.stream.XMLOutputFactory;

import java.lang.*;
import java.io.*;

public class Me {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        long[] a = new long[n];
        long[] x = new long[q];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }
        for (int i = 0; i < q; i++) {
            x[i] = sc.nextLong();
        }
        for (int i = 0; i < q; i++) {
            long count = 0;
            // set<lli> st;
            ArrayList<Long> al = new ArrayList<Long>();
            for (int j = 0; j < n; j++) {
                al.add(a[j]);
            }
            if (!al.contains(x[i])) {
                System.out.println("POSITIVE");
            } else {
                if(al.contains(x[i])){
                    System.out.println("0");
                    break;
                }
                al.add(x[i]);
                Collections.sort(al);
                int ans = al.indexOf(x[i]);
               
                    
                    // lli ans = *(st.find(x[i])) - *(st.begin());
                    // count = ans/a;
                     if (ans % 2 != 0) {
                        System.out.println("NEGATIVE");
                    } else {
                        System.out.println("POSITIVE");
                    }
                }
            }
        }

}