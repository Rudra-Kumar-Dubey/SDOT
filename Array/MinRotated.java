public class MinRotated {
    public static int findMin(int[] nums) {
        int n = nums.length;
        int l = 0;
        int r = n - 1;
        int min = Integer.MAX_VALUE;
        while (l <= r) {
            min = Math.min(min, nums[l]);
            min = Math.min(min, nums[r]);
            l++;
            r--;
        }
        return min;
    }

    public static void main(String[] args) {
        int[] arr = { 3, 4, 1, 2 };
        System.out.println(findMin(arr));
    }
}
