class Next_Permutation {
    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static void reverse(int[] nums, int s) {
        int j = nums.length - 1;
        while (s < j) {
            swap(nums, s, j);
            s++;
            j--;
        }
    }

    public static void nextPermutation(int[] nums) {
        int bp = -1;
        int gp = -1;
        int n = nums.length;
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i + 1] > nums[i]) {
                bp = i;
                break;
            }
        }
        if (bp == -1) {
            reverse(nums, 0);
        } else {
            for (int i = nums.length - 1; i > bp; i--) {
                if (nums[i] > nums[bp]) {
                    gp = i;
                    break;
                }
            }
            swap(nums, bp, gp);
            reverse(nums, bp + 1);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 2, 1, 5, 4, 3, 0, 0 };
        nextPermutation(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}