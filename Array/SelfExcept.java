class SelfExcept {
    public static int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] out = new int[n];
        for (int i = 0; i < n; i++) {
            out[i] = 1;
        }
        int curr = 1;
        for (int i = 0; i < n; i++) {
            out[i] *= curr;
            curr *= nums[i];
        }
        curr = 1;
        for (int i = n - 1; i >= 0; i--) {
            out[i] *= curr;
            curr *= nums[i];
        }
        return out;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4 };
        int[] out = productExceptSelf(nums);
        for (int i = 0; i < nums.length; i++) {
            System.out.print(out[i] + " ");
        }
    }
}