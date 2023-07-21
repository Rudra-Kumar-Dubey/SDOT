public class maximum_sum {
    static public int MaxSubArray(int[] nums) {

        if (nums == null || nums.length == 0)
            return 0;

        int maxSum = nums[0];

        for (int i = 0; i < nums.length; i++) {
            int currSum = 0;

            for (int j = i; j < nums.length; j++) {
                currSum += nums[j];
                maxSum = Math.max(maxSum, currSum);
            }
        }

        return maxSum;
    }

    public static void main(String[] args) {
        int[] n = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        System.out.println(MaxSubArray(n));
    }
}