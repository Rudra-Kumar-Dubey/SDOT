import java.util.*;

class Chocolate_Distribution {
    public static long findMinDiff(ArrayList<Integer> a, int n, int m) {
        long Min = Long.MAX_VALUE;
        Collections.sort(a);
        for (int i = 0; i < n; i++) {
            if (i + m - 1 < n) {
                long min_here = a.get(i + m - 1) - a.get(i);
                Min = Math.min(Min, min_here);
            }
        }
        return Min;
    }

    public static void main(String[] args) {
        ArrayList<Integer> a = new ArrayList<Integer>();
        a.add(3);
        a.add(4);
        a.add(9);
        a.add(1);
        a.add(56);
        a.add(7);
        a.add(9);
        a.add(12);
        System.out.println(findMinDiff(a, 8, 5));

    }
}
