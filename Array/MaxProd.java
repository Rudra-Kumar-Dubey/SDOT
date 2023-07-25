public class MaxProd {
    public static int maxProduct(int[] nums) {
        int max_prod = Integer.MIN_VALUE;
        int max_here = 1;
        int max_rev = 1;
        int j = nums.length - 1;
        for (int i = 0; i < nums.length; i++) {
            max_here *= nums[i];
            max_prod = Math.max(max_prod, max_here);
            if (max_here == 0) {
                max_here = 1;
            }
            max_rev *= nums[j];
            max_prod = Math.max(max_prod, max_rev);
            if (max_rev == 0) {
                max_rev = 1;
            }
            j--;
        }
        return max_prod;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4 };
        System.out.println(maxProduct(nums));
    }
}
