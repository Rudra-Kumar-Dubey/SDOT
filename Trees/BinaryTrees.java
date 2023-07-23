import java.util.LinkedList;

public class BinaryTrees {
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

    static class BinaryTree {
        static int idx = -1;

        public Node buildTree(int node[]) {
            idx++;
            if (node[idx] == -1) {
                return null;
            }
            Node newNode = new Node(node[idx]);
            newNode.left = buildTree(node);
            newNode.right = buildTree(node);

            return newNode;
        }
    }

    public static void preOrder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public static void inOrder(Node root) {
        if (root == null) {
            return;
        }
        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }

    public static void postOrder(Node root) {
        if (root == null) {
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data + " ");
    }

    public static void levelOrder(Node root) {
        if (root == null) {
            return;
        }
        LinkedList<Node> q = new LinkedList<>(); // Queue
        q.add(root);
        q.add(null);
        while (!q.isEmpty()) {
            Node currNode = q.remove();
            if (currNode == null) {
                System.out.println();
                if (q.isEmpty()) {
                    break;
                } else {
                    q.add(null);
                }
            } else {
                System.out.print(currNode.data + " ");
                if (currNode.left != null) {
                    q.add(currNode.left);
                }
                if (currNode.right != null) {
                    q.add(currNode.right);
                }
            }
        }
    }

    public static int count(Node root) {
        if (root == null) {
            return 0;
        }
        int leftNode = count(root.left);
        int rightNode = count(root.right);
        return leftNode + rightNode + 1;
    }

    public static int sum(Node root) {
        if (root == null) {
            return 0;
        }
        int leftSum = sum(root.left);
        int rightSum = sum(root.right);
        return leftSum + rightSum + root.data;
    }

    public static int height(Node root) {
        if (root == null) {
            return 0;
        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        return Math.max(leftHeight, rightHeight) + 1;
    }

    public static int dia(Node root) {
        if (root == null) {
            return 0;
        }
        int leftDia = dia(root.left);
        int rightDia = dia(root.right);
        int Dia = height(root.left) + height(root.right) + 1;
        return Math.max(Dia, Math.max(leftDia, rightDia));
    }

    static class TreeInfo {
        int h;
        int d;

        TreeInfo(int h, int d) {
            this.d = d;
            this.h = h;
        }
    }

    public static TreeInfo dia2(Node root) {
        if (root == null) {
            return new TreeInfo(0, 0);
        }
        TreeInfo left = dia2(root.left);
        TreeInfo right = dia2(root.right);

        int Height = Math.max(left.h, right.h) + 1;
        int Dia1 = left.d;
        int Dia2 = right.d;
        int Dia3 = left.h + right.h + 1;
        int Dia = Math.max(Math.max(Dia1, Dia2), Dia3);
        return new TreeInfo(Height, Dia);
    }

    public static void main(String[] args) {
        int nodes[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        BinaryTree bt = new BinaryTree();
        Node root = bt.buildTree(nodes);
        System.out.println(root.data);
        preOrder(root);
        System.out.println();
        inOrder(root);
        System.out.println();
        postOrder(root);
        System.out.println();
        levelOrder(root);
        System.out.println("Count");
        System.out.println(count(root));
        System.out.println("Sum");
        System.out.println(sum(root));
        System.out.println("Height");
        System.out.println(height(root));
        System.out.println("Diameter");
        System.out.println(dia(root));
    }
}
