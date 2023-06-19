import java.util.Scanner;
import java.util.Stack;

public class parenthisis {
    static boolean checkPar(String eq, Stack<Character> s) {
        int i = 0;
        while (eq.length() > i) {
            if (eq.charAt(i) == '(' || eq.charAt(i) == '{' || eq.charAt(i) == '[') {
                if (s.isEmpty()) {
                    s.push(eq.charAt(i));
                    break;
                }
                s.push(eq.charAt(i));
            } else if (eq.charAt(i) == ')' || eq.charAt(i) == '}' || eq.charAt(i) == ']') {
                if (s.isEmpty()) {
                    s.push(eq.charAt(i));
                    break;
                }
                switch (eq.charAt(i)) {
                    case ')':
                        if (s.peek() == '(') {
                            s.pop();
                        }
                        break;
                    case '}':
                        if (s.peek() == '{') {
                            s.pop();
                        }
                        break;
                    case ']':
                        if (s.peek() == '[') {
                            s.pop();
                        }
                        break;
                    default:
                        break;
                }
            }
            System.out.println(s);
            i++;
        }
        boolean ret = s.isEmpty() ? true : false;
        return ret;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<Character> s = new Stack<Character>();
        System.out.println("Enter Equation");
        String eq = sc.nextLine();
        System.out.println(checkPar(eq, s));
    }
}