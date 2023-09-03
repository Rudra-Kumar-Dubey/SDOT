import java.util.HashSet;

public class suduko {
    // Non optimized
    public static boolean isValidSudokuNO(char[][] board) {
        int n = board.length;
        for (int i = 0; i < n; i++) {
            HashSet<Character> row = new HashSet<>();
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') {
                    if (row.contains(board[i][j])) {
                        System.out.println("In row");
                        return false;
                    }
                    row.add(board[i][j]);
                }
            }
        }
        for (int l = 0; l < 7; l++) {
            for (int k = 0; k < 7; k++) {
                HashSet<Character> box = new HashSet<>();
                System.out.println(l + " " + k);
                for (int i = l; i < l + 3; i++) {
                    for (int j = k; j < k + 3; j++) {
                        if (board[i][j] != '.') {
                            if (box.contains(board[i][j])) {
                                System.out.println("In box");
                                System.out.println(box);
                                System.out.println(l + " " + k + "(" + i + ", " + j + ")");
                                return false;
                            }
                            box.add(board[i][j]);
                        }
                    }
                }
                k += 2;
            }
            l += 2;
        }
        for (int i = 0; i < n; i++) {
            HashSet<Character> col = new HashSet<>();
            for (int j = 0; j < n; j++) {
                if (board[j][i] != '.') {
                    if (col.contains(board[j][i])) {
                        System.out.println("In Col");
                        return false;
                    }
                    col.add(board[j][i]);
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        char[][] board = {
                { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
                { '6', '.', '.', '5', '9', '.', '.', '.', '.' },
                { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
                { '4', '.', '.', '8', '.', '.', '.', '.', '.' },
                { '.', '.', '.', '4', '1', '9', '.', '.', '.' },
                { '.', '.', '.', '.', '2', '.', '.', '.', '9' },
                { '.', '.', '.', '.', '.', '.', '.', '8', '.' },
                { '.', '.', '.', '.', '.', '.', '.', '5', '.' },
                { '.', '.', '.', '.', '.', '.', '.', '4', '.' } };
        System.out.println(isValidSudokuNO(board));
    }
}
