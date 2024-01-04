public class ques1 {
    static int fact(int number) {
        int f = 1;
        int j = 1;
        while (j <= number) {
            f = f * j;
            j++;
        }
        return f;
    }

    public static void main(String[] arg) {
        int n = 3;
        int m = 1;
        int p = 2;
        int e = 1;
        int ans = (fact(n) / (fact(p) * fact(n - p))) * (fact(m) / (fact(e) * fact(m - e)));
        System.out.println(ans);
    }
}
