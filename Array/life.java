class life {
    public static void gameOfLife(int[][] board) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                int count = 0;
                count += isLive(board, i - 1, j - 1);
                count += isLive(board, i - 1, j);
                count += isLive(board, i - 1, j + 1);
                count += isLive(board, i, j - 1);
                count += isLive(board, i, j + 1);
                count += isLive(board, i + 1, j - 1);
                count += isLive(board, i + 1, j);
                count += isLive(board, i + 1, j + 1);
                if (board[i][j] == 1) {
                    if (count == 2 || count == 3) {
                        board[i][j] = 1;
                    } else {
                        board[i][j] = -2;
                    }
                } else {
                    if (count == 3) {
                        board[i][j] = -1;
                    }
                }
            }
        }
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                if (board[i][j] == -1) {
                    board[i][j] = 1;
                }
                if (board[i][j] == -2) {
                    board[i][j] = 0;
                }
            }
        }

    }

    public static int isLive(int[][] board, int i, int j) {
        if (i < 0 || i >= board.length) {
            return 0;
        }
        if (j < 0 || j >= board[0].length) {
            return 0;
        }
        if (board[i][j] == 1 || board[i][j] == -2) {
            return 1;
        }
        return 0;
    }

    public static void main(String[] args) {
        int[][] matrix = { { 0, 1, 0 }, { 0, 0, 1 }, { 1, 1, 1 }, { 0, 0, 0 } };
        gameOfLife(matrix);
        for (int i = 0; i < matrix.length; i++) {
            System.out.println();
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
        }
    }
}