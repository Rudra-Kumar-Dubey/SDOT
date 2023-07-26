import java.util.HashMap;

public class PairSorted {
    public static int Countpair(int a[], int n, int sum) {
        HashMap<Integer, Integer> m = new HashMap<>();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (m.containsKey(sum - a[i])) {
                count++;
            }
            if (m.containsKey(a[i])) {
                m.put(a[i], m.get(a[i]) + 1);
            } else {
                m.put(a[i], 1);
            }
        }
        if (count == 0) {
            return -1;
        } else {
            return count;
        }
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 3, 4, 5, 6, 7 };
        int n = a.length;
        int sum = 8;
        System.out.println(Countpair(a, n, sum));
    }
}
