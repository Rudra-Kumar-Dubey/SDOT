public class Count {
    node head;

    static class node {
        int data;
        node next;

        node(int d) {
            data = d;
            next = null;
        }
    }

    static void count(Count c) {
        node curr = c.head;
        int co = 0;
        while (curr != null) {
            curr = curr.next;
            co++;
        }
        System.out.println("Count is " + co);
    }

    public static void print(Count c) {
        node curr = c.head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }
    }

    public static void main(String[] args) {
        Count c = new Count();
        node l6 = new node(15);
        node l5 = new node(13);
        node l3 = new node(16);
        node l4 = new node(12);
        node l2 = new node(10);
        node l1 = new node(5);
        l5.next = l6;
        l4.next = l5;
        l3.next = l4;
        l2.next = l3;
        l1.next = l2;
        c.head = l1;
        count(c);
        print(c);

    }
}
