import java.util.ArrayList;

class BST {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    public static Node insert(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }
        if (root.data > val) {
            // left subtree;
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }
        return root;
    }

    public static void inOrder(Node root) {
        if (root == null) {
            return;
        }
        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);

    }

    // Search in BST
    public static boolean Search(Node root, int key) {
        if (root == null) {
            return false;
        }
        if (root.data > key) {
            return Search(root.left, key);
        } else if (root.data == key) {
            return true;
        } else {
            return Search(root.right, key);
        }
    }

    public static Node delete(Node root, int val) {
        if (root.data > val) {
            root.left = delete(root.left, val);
        } else if (root.data < val) {
            root.right = delete(root.right, val);
        } else {
            // root.data == val

            // case 1: leaf node
            if (root.left == null && root.right == null) {
                return null;
            }

            // case 2:
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }

            // case 3:
            Node IS = inOrderSuccessor(root.right);
            root.data = IS.data;
            root.right = delete(root.right, IS.data);
        }

        return root;

    }

    public static Node inOrderSuccessor(Node root) {
        while (root.left != null) {
            root = root.left;
        }
        return root;
    }

    public static void range(Node root, int X, int Y) {
        if (root == null) {
            return;
        }
        if (root.data >= X && root.data <= Y) {
            range(root.left, X, Y);
            System.out.print(root.data + " ");
            range(root.right, X, Y);
        } else if (root.data >= Y) {
            range(root.left, X, Y);
        } else {
            range(root.right, X, Y);
        }
    }

    public static void printR2L(Node root, ArrayList<Integer> path) {
        if (root == null) {
            return;
        }
        path.add(root.data);
        if (root.left == null && root.right == null) {
            printPath(path);
        } else {
            printR2L(root.left, path);
            printR2L(root.right, path);
        }
        path.remove(path.size() - 1);
    }

    public static void printPath(ArrayList<Integer> path) {
        for (int i = 0; i < path.size(); i++) {
            System.out.print(path.get(i) + "->");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] values = { 8, 5, 3, 1, 4, 6, 10, 11, 14 };
        Node root = null;
        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }
        inOrder(root);
        System.out.println();
        System.out.println("Searching Key: ");
        System.out.println(Search(root, 6));
        // int val = 3;
        // System.out.println("Deletion: " + val);
        // delete(root, val);
        inOrder(root);
        System.out.println();
        int a = 2;
        int b = 6;
        System.out.println("Range: " + a + " to " + b);
        range(root, a, b);
        System.out.println();
        System.out.println("Root to Leaf: ");
        ArrayList<Integer> path = new ArrayList<>();
        printR2L(root, path);
    }
}