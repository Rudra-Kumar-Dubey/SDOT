
// You are using Java
import java.util.*;

class CountWords {
    public static void main(String[] arg) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            int count = 0;
            int word = 1;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) != ' ') {
                    count++;
                }
                if (s.charAt(i) == ' ') {
                    if (count > 0) {
                        word++;
                    }
                    count = 0;
                }
            }
            System.out.println(word);
        }
    }
}
