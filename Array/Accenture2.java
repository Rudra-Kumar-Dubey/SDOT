import java.util.*;

public class Accenture2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        String s = sc.next();
        String t = sc.next();
        int cost = 0;
        for (int i = 0; i < m; i++) {
            int minn = t.charAt(0);
            for (int j = 0; j < n; j++) {
                int c = 0;
                if ((26 - (s.charAt(i) - t.charAt(j))) > (Math.abs(s.charAt(i) - t.charAt(j)))) {
                    c = Math.abs(s.charAt(i) - t.charAt(j));
                } else {
                    c = 26 - (s.charAt(i) - t.charAt(j));
                }
                minn = Math.min(c, minn);
            }
            cost += minn;
        }
        System.out.println(cost);
        sc.close();
    }
}
