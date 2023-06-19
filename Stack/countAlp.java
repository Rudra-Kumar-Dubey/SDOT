import java.util.Scanner;
import java.util.Stack;

public class countAlp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String c = "" + s.charAt(0);
        char a = s.charAt(0);
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (a == s.charAt(i)) {
                count++;
            } else {
                c = c + count;
                c = c + s.charAt(i);
                a = s.charAt(i);
                count = 1;
            }
        }
        c = c + count;
        System.out.println(c);
    }
}
