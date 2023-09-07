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

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 1 };
        int k = 3;
        System.out.println(containsNearbyDuplicateNOP(nums, k));
    }
}