import java.util.HashMap;
import java.util.Map;

public class DivByK {
    // Not op
    public static int subarraysDivByK(int[] A, int K) {
        int N = A.length;
        int[] modGroups = new int[K];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            int group = sum % K;

            if (group < 0)
                group += K;
            System.out.print(group + " ");
            modGroups[group]++;
        }
        System.out.println();
        int total = 0;
        for (int x : modGroups) {
            System.out.print(x + " ");
            if (x > 1)
                total += (x * (x - 1)) / 2;
        }
        System.out.println();
        return total + modGroups[0];
    }

    // not opti
    public static int subarraysDivByKgg(int[] nums, int k) {
        int sum = 0, count = 0;
        Map<Integer, Integer> map = new HashMap<>();
        map.put(0, 1);

        for (int num : nums) {
            sum += num;
            int key = (sum % k + k) % k;
            System.out.print(key + " ");
            count += map.getOrDefault(key, 0);
            System.out.print(count + " ");
            map.put(key, map.getOrDefault(key, 0) + 1);
            System.out.println(map.get(key));
        }
        return count;
    }

    public int subarraysDivByKop(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        int sum = 0;
        int res = 0;
        for (int i : nums) {
            sum += i;
            map.put(((sum % k) + k) % k, map.getOrDefault(((sum % k) + k) % k, 0) + 1);
        }
        for (int i : map.keySet()) {
            int val = map.get(i);
            if (val > 1)
                res += ((val * (val - 1)) / 2);
        }

        return res + (map.get(0) != null ? map.get(0) : 0);
    }

    public static void main(String[] args) {
        int[] nums = { 4, 5, 0, -2, -3, 1 };
        int k = 5;
        System.out.println(subarraysDivByK(nums, k));
    }
}
