import java.util.Scanner;

public class smallestInt {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int i = 2;
            int f = 0;
            int k = 81;
            while (a > k) {
                k *= 9;
                i++;
            }
            int[] arr = new int[i];
            int numSet = i - 1;
            while (numSet > 0 || a > 0) {
                f = 0;
                for (int j = 9; j > 1; j--) {
                    if (a % j == 0) {
                        arr[numSet] = j;
                        numSet--;
                        a = a / j;
                        f = 1;
                        break;
                    }
                }
                if (f != 1) {
                    System.out.println("Impossible");
                    break;
                }
                if (numSet == -1) {
                    f = 1;
                    break;
                }
                if (a == 1) {
                    break;
                }
            }
            if (f == 1) {
                for (int m = 0; m < arr.length; m++) {
                    System.out.print(arr[m] + " ");
                }
            }

        }
    }
}
