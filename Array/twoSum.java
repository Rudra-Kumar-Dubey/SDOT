public class twoSum {
    public static int[] twoSumm(int[] numbers, int target) {
        int l = 0;
        int r = numbers.length - 1;
        int ans[] = new int[2];
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                ans[0] = l + 1;
                ans[1] = r + 1;
                break;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int arr[] = { 2, 7, 11, 15 };
        int t = 9;
        int ans[] = twoSumm(arr, t);
        for (int i = 0; i < 2; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}
