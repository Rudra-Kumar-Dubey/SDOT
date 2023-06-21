import java.util.Scanner;

public class primepair {
    static boolean isPrime(int x) {
        int n = x / 2;
        if (x == 0 || x == 1) {
            return false;
        }
        for (int i = 2; i <= n; i++) {
            if (x == 1) {
                break;
            }
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int c = sc.nextInt();
        int k = 0;
        for (int i = n; i < m; i++) {
            if (isPrime(i)) {
                k++;
            }
        }
        int a[] = new int[k];
        k = 0;
        for (int i = n; i < m; i++) {
            if (isPrime(i)) {
                a[k] = i;
                k++;
            }
        }
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                if (a[i] - a[j] == c) {
                    System.out.println("{" + a[i] + ", " + a[j] + "}");
                }
            }
        }

    }
}
