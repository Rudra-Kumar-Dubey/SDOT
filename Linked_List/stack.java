public class stack {
    node top;

    static class node {
        int data;
        node next;

        node(int d) {
            data = d;
            next = null;
        }
    }

    static stack push(int d, stack s) {
        node newnode = new node(d);
        node curr = s.top;
        if (s.top == null) {
            s.top = newnode;
        } else {
            s.top = newnode;
            newnode.next = curr;
        }
        return s;
    }

    public static void print(stack s) {
        node curr = s.top;
        while (curr != null) {
            if (curr.next == null) {
                System.out.println(curr.data);
            } else {
                System.out.print(curr.data + "-->");
            }
            curr = curr.next;
        }
    }

    public static stack pop(stack s) {
        node curr = s.top;
        if (s.top == null) {
            System.out.println("No element to pop");
        } else {
            s.top = curr.next;
            curr = null;
        }
        return s;
    }

    public static void peek(stack s) {
        if (s.top == null) {
            System.out.println("Empty Stack!");
        } else {
            System.out.println(s.top.data);
        }
    }

    public static void main(String[] args) {
        stack s = new stack();
        print(s);
        peek(s);
        push(5, s);
        push(6, s);
        push(10, s);
        push(11, s);
        push(13, s);
        peek(s);
        print(s);
        pop(s);
        pop(s);
        peek(s);
        print(s);
    }
}
