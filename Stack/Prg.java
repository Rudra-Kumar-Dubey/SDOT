public class Prg {
    public static void main(String[] args) {
        int n = 391;
        int zero = n % 10;
        int ones = n % 100 - zero;
        int tens = n % 1000 - ones - zero;
        int rev = zero * 100 + ones + tens / 100;
        System.out.println(rev);
    }
}
