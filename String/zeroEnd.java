import java.util.Scanner;

public class zeroEnd {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            int t = n;
            int c = 0;
            while (t > 0) {
                t = t / 10;
                c++;
            }
            for (int i = m; i <= n; i++) {
                int k = i;
                int l = 0;
                while (k > 0) {
                    k = k / 10;
                    l++;
                }
                for (int j = 0; j < (c - l); j++) {
                    System.out.print("0");
                }
                System.out.println(i);
            }
        }
    }
}
