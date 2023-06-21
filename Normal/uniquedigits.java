import java.util.Scanner;

public class uniquedigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int arr[] = new int[9];
        for (int i = n; i <= m; i++) {
            int t = i;
            while (t > 0) {
                arr[t % 10]++;
                t = t / 10;
            }
        }
        int c = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                c++;
                System.out.println(i);
            }
        }
        System.out.println("Unique Digits: " + c);
    }
}
