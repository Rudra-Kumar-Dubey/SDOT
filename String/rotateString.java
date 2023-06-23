import java.util.Scanner;

public class rotateString {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = "rudra";
            int p = 3;
            String a = "";
            String b = "";
            char d = 'R';
            if (p < s.length()) {
                if (d == 'L') {
                    a = s.substring(0, p);
                    b = s.substring(p + 1, s.length());
                    System.out.println(s.substring(p, p + 1) + b + a);
                }
                if (d == 'R') {
                    a = s.substring(0, s.length() - p - 1);
                    b = s.substring(s.length() - p, s.length());
                    System.out.println(b + a + s.substring(s.length() - p - 1, s.length() - p));
                }
            }
        }
    }

}
