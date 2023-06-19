public class SpecialNum {
    public static void main(String[] args) {
        for (int i = 0; i < 100; i++) {
            int n = i;
            int sum = 0;
            int product = 1;
            while (n > 0) {
                sum += n % 10;
                product *= n % 10;
                n = n / 10;
            }
            if (sum + product == i) {
                System.out.println(i + " is speciallll");
            } else {
                System.out.println(i + " is not better luck next time");
            }
        }
    }
}
