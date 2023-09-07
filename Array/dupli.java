import java.util.HashSet;

class dupli {
    public static boolean containsNearbyDuplicateNOP(int[] nums, int k) {
        for (int i = 0; i < nums.length; i++) {
            int ele = nums[i];
            for (int j = i + k; j > i; j--) {
                if (j < nums.length && ele == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean containsNearbyDuplicate(int[] nums, int k) {
        if (nums == null || nums.length < 2 || k == 0)
            return false;
        int i = 0;
        HashSet<Integer> set = new HashSet<Integer>();
        for (int j = 0; j < nums.length; j++) {
            if (!set.add(nums[j])) {
                return true;
            }
            if (set.size() >= k + 1) {
                set.remove(nums[i++]);
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 1 };
        int k = 3;
        System.out.println(containsNearbyDuplicateNOP(nums, k));
        System.out.println(containsNearbyDuplicate(nums, k));
    }
}