import java.util.*;

public class stackk {
    private ArrayList<Integer> s;
    private int top;

    public stackk() {
        s = new ArrayList<>();
        top = -1;
    }

    public void push(int val) {
        top = top + 1;
        s.add(val);
    }

    public void pop() {
        s.remove(top);
        top = top - 1;
    }

    public int top() {
        return s.get(top);
    }

    public int getMin() {
        int min = s.get(top);
        for (int i = 0; i < top + 1; i++) {
            int temp = s.get(i);
            min = Math.min(min, temp);
        }
        return min;
    }

    public static void main(String[] args) {
        stackk st = new stackk();
        st.push(10);
        st.push(-1);
        st.push(100);
        st.push(2);
        System.out.println(st.getMin());
        System.out.println(st.top());
        st.pop();
        System.out.println(st.top());
    }
}
