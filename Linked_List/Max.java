public class Max {
    node head;

    static class node {
        int data;
        node next;

        node(int d) {
            data = d;
            next = null;
        }
    }

    public static void Maximum(Max c) {
        node curr = c.head;
        int maxx = 0;
        while (curr != null) {
            System.out.print(curr.data + "-->");
            maxx = Math.max(maxx, curr.data);
            curr = curr.next;
        }
        System.out.println();
        System.out.println("Max is " + maxx);
    }

    public static void main(String[] args) {
        Max c = new Max();
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
        Maximum(c);

    }
}
