package String;

import java.util.Scanner;

public class zeroEnd {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            for (int i = m; i <= n; i++) {
                if (i / n < 1) {
                    System.out.println("0" + i);
                } else {
                    System.out.println(i);
                }
            }
        }
    }
}
