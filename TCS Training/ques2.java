public class ques2 {
    public static void main(String[] arg) {
        int B = 35;
        int N = 3;
        int Z[] = { 5, 9, 6 };
        for (int i = 0; i < N; i++) {
            B -= (Z[i] % 2) + (Z[i] / 2);
            if (B < 0) {
                break;
            }
        }
        if (B < 0) {
            System.out.println("No");
        } else {
            System.out.println("Yes");
        }
    }
}
