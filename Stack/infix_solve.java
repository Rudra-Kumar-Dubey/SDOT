import java.util.Scanner;
import java.util.Stack;

public class infix_solve {
    static int precedence(char ch) {
        int p = 0;
        
        return p;
    }

    static String postFix(String infix, Stack<Character> s) {
        String postfix = "";
        int i = 0;
        while (infix.charAt(i) != '?') {
            if (!s.isEmpty()) {
                char ch = infix.charAt(i);
                precedence(ch);
                if(precedence(ch) == 1){
                    s.push(infix.charAt(i));
                }else if(precedence(ch) > precedence(s.peek())){
                    

                }

            } else {
                s.push(infix.charAt(i));
            }
        }
        while (!s.isEmpty()) {
            postfix = postfix + s.pop();
        }
        return postfix;
    }

    public static void main(String[] arg) {
        try (Scanner sc = new Scanner(System.in)) {
            Stack<Character> s = new Stack<Character>();
            System.out.println("Enter Infix Equation");
            String infix = sc.nextLine();
            System.out.println(postFix(infix, s));
        }
    }
}
