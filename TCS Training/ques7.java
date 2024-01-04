public class ques7 {
    static int steps(String a, String b) {
        if (a.equals(b)) {
            return 0;
        }
        int steps = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i)) {
                steps++;
            }
        }
        return steps;
    }

    public static void main(String[] arg) {
        String a = "abab";
        String b = "abaa";
        System.out.println(steps(a, b));
    }
}
