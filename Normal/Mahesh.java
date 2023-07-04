import java.util.*;

class Mahesh {
    public static void main(String[] arg) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();

            Stack<Character> st = new Stack<Character>();
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ')' && !st.isEmpty() && st.peek() == '(') {
                    st.pop();
                } else {
                    st.push(s.charAt(i));
                }
            }
            System.out.println(s.length() - st.size());
        }
    }
}