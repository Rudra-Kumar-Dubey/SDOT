import java.util.*;

class union {
    public static int doUnion(int a[], int n, int b[], int m) {
        Set<Integer> s = new HashSet<Integer>();
        if (n > m) {
            for (int i = 0; i < n; i++) {

                if (i < m) {
                    s.add(b[i]);
                }
                s.add(a[i]);
            }
        } else {
            for (int i = 0; i < m; i++) {

                if (i < n) {
                    s.add(a[i]);
                }
                s.add(b[i]);
            }
        }
        return s.size();
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int t = sc.nextInt();
            sc.nextLine();
            while (t-- > 0) {

                int n, m;

                // taking size of array a
                n = sc.nextInt();

                // taking size of array b
                m = sc.nextInt();

                // Creating 2 array of size n and m
                int a[] = new int[n];
                int b[] = new int[m];

                // inserting elements to array a
                for (int i = 0; i < n; i++) {
                    a[i] = sc.nextInt();
                }

                // inserting elements to array b
                for (int i = 0; i < m; i++) {
                    b[i] = sc.nextInt();
                    // calling doUnion method and printing the results
                    System.out.println(doUnion(a, n, b, m));
                }
            }
        }
    }
}
