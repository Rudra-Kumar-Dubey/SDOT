class Solution {
    public int evalRPN(String[] tokens) {
        Stack <Integer> stk = new Stack <>();
        int x, y;
        for (String ch: tokens) {
            switch (ch) {
                case "+":
                    x = stk.pop();
                    y = stk.pop();
                    stk.push(y + x);
                    break;
                case "-":
                    x = stk.pop();
                    y = stk.pop();
                    stk.push(y - x);
                    break;
                case "*":
                    x = stk.pop();
                    y = stk.pop();
                    stk.push(y * x);
                    break;
                case "/":
                    x = stk.pop();
                    y = stk.pop();
                    stk.push(y / x);
                    break;
                default:
                    stk.push(Integer.parseInt(ch));
            }
        }
        System.out.print(stk);
        return stk.pop();
    }
}
