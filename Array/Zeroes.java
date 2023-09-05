public class Zeroes {
    public static void setZeroes(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] == 0) {
                    matrix = setter(matrix, i, j);
                }
            }
        }
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] == -143) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    public static int[][] setter(int[][] matrix, int i, int j) {
        int top = 0;
        int left = 0;
        int bottom = matrix.length;
        int right = matrix[0].length;
        while (left < right) {
            if (matrix[i][left] != 0 && matrix[i][left] != -143) {
                matrix[i][left] = -143;
            }
            left++;
        }
        while (top < bottom) {
            if (matrix[top][j] != 0 && matrix[top][j] != -143) {
                matrix[top][j] = -143;
            }
            top++;
        }
        return matrix;
    }

    public static void main(String[] args) {
        int[][] matrix = { { 1, 1, 1 }, { 1, 0, 1 }, { 1, 1, 1 } };
        setZeroes(matrix);
        for (int i = 0; i < matrix.length; i++) {
            System.out.println();
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
        }
    }
}
