public class happy {
    public static boolean isHappy(int n) {
        int slow = n;
        int fast = n;
        do {
            slow = rec(slow);
            fast = rec(rec(fast));
        } while (slow != fast);
        return slow == 1;
    }

    public static int rec(int n) {
        int sqSum = 0;
        while (n > 0) {
            int rem = n % 10;
            sqSum += rem * rem;
            n /= 10;
        }
        return sqSum;
    }

    public static void main(String[] args) {
        int n = 19;
        System.out.println(isHappy(n));
    }
}
