public class ques4 {
    public static void main(String[] args) {
        int H = 1;
        int M = 15;
        int TotMin = H * 60 + M;
        int left = 24 * 60 - TotMin;
        if (TotMin > 12 * 60) {
            left = TotMin - 12 * 60;
            System.out.println("- " + left / 60 + " : " + left % 60);
        } else {
            System.out.println(left / 60 + " : " + left % 60);
        }
    }
}
