public class ques5 {
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
        int N = 6;
        int I = 3;
        int X = 2;
        int n = N - I;
        System.out.println(fact(n) / (fact(X) * fact(n - X)));

    }
}