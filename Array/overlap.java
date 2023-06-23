import java.util.Scanner;

public class overlap {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int n2 = sc.nextInt();
            int s = sc.nextInt();
            int j = 0;
            int tag = 0;
            System.out.println("Enter Array: ");
            for (int i = 0; i < arr.length; i++) {
                arr[i] = sc.nextInt();
            }
            System.out.print("Solution is: ");
            if (n > s && n % s == 0) {
                for (int i = 0; i < arr.length; i++) {
                    tag = 0;
                    for (j = i; j < (n / s) + i; j++) {
                        if (arr[j] == n2) {
                            tag = 1;
                            break;
                        }
                    }
                    if (tag == 0) {
                        System.out.println(0);
                        break;
                    }
                    i = (n / s) + i - 1;
                }
                if (tag == 1) {
                    System.out.println(1);
                }
            } else {
                System.out.println("else");
                System.out.println(0);
            }
        }
    }
}
