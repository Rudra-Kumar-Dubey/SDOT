import java.util.Arrays;

class kthsmall {

    // not optimized
    public static int kthSmallest(int[][] matrix, int k) {
        int[] set = new int[matrix.length * matrix.length];
        int c = 0;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                set[c] = matrix[i][j];
                c++;
            }
        }
        Arrays.sort(set);
        return set[k - 1];
    }

    public static void main(String[] args) {
        int[][] matrix = { { 1, 5, 9 }, { 10, 11, 13 }, { 12, 13, 15 } };
        int k = 8;
        System.out.println(kthSmallest(matrix, k));
    }
}