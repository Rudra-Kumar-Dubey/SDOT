public class loop {
    public static void main(String[] args) {
        int res[] = new int[20];
        int i, j;
        for (i = 1, j = 0; i <= 20; i++) {
            if (i % 3 == 0) {
                res[j++] = i;
            }
            if (i % 6 == 0) {
                res[j++] = i;
            }
        }
        for (int k = 0; k < res.length; k++) {
            System.out.println(res[k]);
        }
    }
}
