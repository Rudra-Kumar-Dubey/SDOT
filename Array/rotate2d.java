public class rotate2d {
    public static void rotate(int[][] matrix) {
        int n = matrix.length;
        for (int i = 0; i < n; i++) {
            int l = n - 1;
            int j = 0;
            while (j < l) {
                int t = matrix[j][i];
                matrix[j][i] = matrix[l][i];
                matrix[l][i] = t;
                l--;
                j++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                ;
                matrix[j][i] = t;
            }
        }
    }

    public static void main(String[] args) {
        int[][] matrix = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        int n = matrix.length;
        System.out.println("Before Rotations");
        for (int i = 0; i < n; i++) {
            System.out.println();
            for (int j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + " ");
            }
        }
        System.out.println();
        System.out.println();
        System.out.println("After rotation");
        rotate(matrix);
        for (int i = 0; i < n; i++) {
            System.out.println();
            for (int j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + " ");
            }
        }
    }
}
