import java.util.Scanner;

public class ques3 {
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'G') {
                continue;
            } else if (s.charAt(i) == 'E') {
                if (i + 1 < s.length() && s.charAt(i + 1) == 'F') {
                    i++;
                    continue;
                } else {
                    ans += s.charAt(i);
                    continue;
                }
            }
            ans += s.charAt(i);
        }
        System.out.println(ans);
    }
}
