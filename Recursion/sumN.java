
public class sumN {
    public static int Sum(int n, int sum) {
        if (n == 0) {
            return sum;
        }
        sum += n;
        return Sum(n - 1, sum);
    }

    public static void main(String[] args) {
        int n = 5;
        int sum = 0;
        System.out.println(Sum(n, sum));
    }
}
