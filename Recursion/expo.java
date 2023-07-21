public class expo {
    public static int exp(int x, int n) {
        if (n == 0) {
            return 1;
        }
        if (x == 0) {
            return 0;
        }
        return x * exp(x, n - 1);
    }

    public static int logExpo(int x, int n) {
        if (n == 0) {
            return 1;
        }
        if (x == 0) {
            return 0;
        }
        if (n % 2 == 0) {
            return logExpo(x, n / 2) * logExpo(x, n / 2);
        } else {
            return x * logExpo(x, n / 2) * logExpo(x, n / 2);
        }
    }

    public static void main(String[] args) {
        int x = 2;
        int n = 10;
        System.out.println(exp(x, n));
        System.out.println(logExpo(x, n));
    }
}
