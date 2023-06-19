public class martix {
    public static void main(String[] args) {
        int[][] a = { { 2, 2, 3 }, { 2, 4, 6 }, { 8, 6, 10 } };
        int k = a[0][0] % 2;
        int f = 0;
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[0].length; j++) {
                if (a[i][j] % 2 != k) {
                    f = 1;
                    break;
                }
            }
        }
        System.out.println(f == 1 ? false : true);
    }

}
