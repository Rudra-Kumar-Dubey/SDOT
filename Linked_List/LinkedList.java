public class LinkedList {
    node head;

    static class node {
        int data;
        node next;

        node(int d) {
            data = d;
            next = null;
        }
    }

    public static void print(LinkedList l) {    
        node curr = l.head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }
    }

    public static LinkedList insert(LinkedList l, int d) {
        node data = new node(d);
        if (l.head == null) {
            l.head = data;
        } else {
            node last = l.head;
            while (last.next != null) {
                last = last.next;
            }
            last.next = data;
        }
        System.out.println("Inserted " + d);
        return l;
    }

    public static LinkedList insertAtPos(LinkedList l, int pos, int d) {
        node data = new node(d), nx;
        node curr = l.head;
        if (pos == 0) {
            l.head = data;
            data.next = curr;
            return l;
        }
        int index = 1;
        while (curr != null) {
            if (index == pos) {
                nx = curr.next;
                curr.next = data;
                data.next = nx;
                return l;
            }
            curr = curr.next;
            index++;
        }
        System.out.println("Out of bounds");
        return l;
    }

    public static LinkedList delete(LinkedList l) {
        node curr = l.head, prev = null;
        while (curr.next != null) {
            prev = curr;
            curr = curr.next;
        }
        prev.next = null;
        return l;
    }

    public static LinkedList deleteStart(LinkedList l) {
        node curr = l.head;
        curr = curr.next;
        l.head = curr;
        return l;
    }

    public static LinkedList deleteAtPos(LinkedList l, int pos) {
        node curr = l.head, prev = null;
        int index = 1;
        if (pos == 1) {
            curr = curr.next;
            l.head = curr;
            return l;
        }
        while (curr != null) {
            if (index == pos) {
                prev.next = curr.next;
                return l;
            }
            prev = curr;
            curr = curr.next;
            index++;
        }
        return l;
    }

    public static void main(String[] args) {
        LinkedList l = new LinkedList();
        node l3 = new node(16);
        node l2 = new node(10);
        node l1 = new node(5);
        l2.next = l3;
        l1.next = l2;
        l.head = l1;
        System.out.println("Before Insertion");
        print(l);
        System.out.println();
        l = insert(l, 6);
        l = insert(l, 7);
        l = insert(l, 8);
        System.out.println();
        System.out.println("After Insertion");
        print(l);
        System.out.println();
        System.out.println("Inserting at pos");
        System.out.println();
        l = insertAtPos(l, 0, 4);
        System.out.println();
        print(l);
        System.out.println();
        System.out.println("Deletion");
        l = delete(l);
        l = deleteStart(l);
        l = deleteAtPos(l, 5);
        l = insert(l, 6);
        System.out.println();
        print(l);
    }
}