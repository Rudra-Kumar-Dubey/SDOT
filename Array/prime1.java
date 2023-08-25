public class prime1 {
    public static boolean checkPrime(int num) {
        if (num == 1 || num == 0) {
            return false;
        }
        if (num == 2) {
            return true;
        }
        for (int i = 2; i < num / 2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;

    }

    public static boolean checkPalindrome(int num) {
        int rev = 0;
        int n = num;
        while (num > 0) {
            int rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (rev == n) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        int start = 100;
        int end = 1000;
        for (int i = start; i <= end; i++) {
            if (checkPrime(i)) {
                if (checkPalindrome(i)) {
                    System.out.print(i + " ");
                }
            }
        }

    }
}
