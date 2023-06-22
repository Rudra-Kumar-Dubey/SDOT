import java.util.Scanner;

public class series {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int j = 2;
            for (int i = 1; i <= n; i++) {
                System.out.print(j * ((j * 2) - 1) + " ");
                j = 2 * (i + 1);
            }
        }
    }
}
