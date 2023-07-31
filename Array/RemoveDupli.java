public class RemoveDupli {
    public static int removeDuplicates(int[] nums) {
        int j = 1;
        for (int i = 2; i < nums.length; i++)
            if (nums[i] != nums[j - 1])
                nums[++j] = nums[i];
        return j + 1;
    }

    public static void main(String[] args) {
        int nums[] = { 1, 1, 1, 2, 2, 3 };
        System.out.print(removeDuplicates(nums));
    }
}
