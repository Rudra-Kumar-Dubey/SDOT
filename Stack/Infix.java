import java.util.Stack;
import java.util.Scanner;

public class Infix {
    static String postFix(String infix, Stack<Character> s) {
        String postFix = "";
        for (int i = 0; i < infix.length(); i++) {
            if (infix.charAt(i) == '*' || infix.charAt(i) == '/') {
                if (s.isEmpty()) {
                    s.push(infix.charAt(i));
                } else if (s.peek() == '+' || s.peek() == '-') {
                    s.push(infix.charAt(i));
                } else {
                    postFix = postFix + s.pop();
                    s.push(infix.charAt(i));
                }
            } else if (infix.charAt(i) == '+' || infix.charAt(i) == '-') {
                if (s.isEmpty()) {
                    s.push(infix.charAt(i));
                } else if (s.peek() == '/' || s.peek() == '*') {
                    postFix = postFix + s.pop();
                    s.push(infix.charAt(i));
                } else {
                    postFix = postFix + s.pop();
                    s.push(infix.charAt(i));
                }
            } else {
                postFix = postFix + infix.charAt(i);
            }
            if (i == infix.length() - 1) {
                while (!s.isEmpty()) {
                    postFix = postFix + s.pop();
                }
            }
        }
        return postFix;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            Stack<Character> s = new Stack<Character>();
            System.out.println("Enter Infix Equation");
            String infix = sc.nextLine();
            System.out.println(postFix(infix, s));
        }

    }

}
