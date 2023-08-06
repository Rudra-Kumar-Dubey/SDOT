import java.util.*;

class Combinations {
    public static void combinations(List<Integer> temp, List<List<Integer>> ans, int s, int n, int k) {
        if (temp.size() == k) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        for (int i = s; i <= n; i++) {
            temp.add(i);
            combinations(temp, ans, i + 1, n, k);
            temp.remove(temp.size() - 1);
        }
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        combinations(temp, ans, 1, n, k);
        return ans;
    }

    public static void main(String[] args) {
        int n = 4;
        int k = 3;
        System.out.println(combine(n, k));
    }

}