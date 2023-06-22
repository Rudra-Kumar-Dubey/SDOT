import java.util.Scanner;

public class binaryString {
    public static void main(String[] arg) {
        try (Scanner sc = new Scanner(System.in)) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            int a[] = { 0, 0 };
            int b[] = { 0, 0 };
            if (s1.length() == s2.length()) {
                for (int i = 0; i < s1.length(); i++) {
                    if (s1.charAt(i) == '1') {
                        a[1]++;
                    } else {
                        a[0]++;
                    }
                    if (s2.charAt(i) == '1') {
                        b[1]++;
                    } else {
                        b[0]++;
                    }
                }
                if (a[0] == b[0] && a[1] == b[1]) {
                    System.out.println("Possible");
                } else {
                    System.out.println("Impossible");
                }
            } else {
                System.out.println("No");
            }

        }
    }
}
