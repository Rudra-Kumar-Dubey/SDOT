import java.util.Scanner;
import java.lang.Math;

public class decOrder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        int n = sc.nextInt();
        int t = n;
        int maxx = 0;
        int f = 0;
        while (t > 0) {
            int k = t % 10;
            maxx = Math.max(maxx, k);
            t = t / 10;
            if (maxx != k) {
                f = 1;
                break;
            }
        }
        if (f == 1) {
            System.out.println("Wrong");
        } else {
            System.out.println("Right");
        }
    }
}
