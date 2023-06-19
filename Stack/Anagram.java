import java.util.Stack;
import java.util.Arrays;

public class Anagram {
    static int check(char[] s1, char[] s2) {
        Stack<Character> stack = new Stack<Character>();
        int i = s1.length - 1;
        Arrays.sort(s1);
        Arrays.sort(s2);
        System.out.println(s1);
        System.out.println(s2);
        if (s1.length == s2.length) {
            while (i >= 0) {
                stack.push(s1[i]);
                i--;
            }
            System.out.println(stack);
            int j = 0;
            while (!stack.isEmpty()) {
                if (s2[j] != stack.peek()) {
                    return 0;
                }
                stack.pop();
                j++;
            }
            return 1;
        }
        return 0;
    }

    public static void main(String[] args) {
        char[] s1 = { 'r', 'u', 'd', 'r', 'a' };
        char[] s2 = { 'r', 'e', 'r', 'd', 'a' };
        if (check(s1, s2) == 1) {
            System.out.println("It is a anagram");
        } else {
            System.out.println("Not a anagram");
        }

    }
}
