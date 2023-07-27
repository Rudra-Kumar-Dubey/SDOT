public class MergePlan {
    public static int mergePla(int arr[], int n) {
        if (arr.length == 0) {
            return 0;
        }
        int l = 0;
        int r = arr.length - 1;
        int count = 0;
        while (l < r) {
            if (arr[l] == arr[r]) {
                l++;
                r--;
            } else if (arr[l] < arr[r]) {
                count++;
                l++;
                arr[l] += arr[l - 1];
            } else {
                count++;
                r--;
                arr[r] += arr[r + 1];
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] arr = { 11, 14, 15, 99 };
        int n = arr.length;
        System.out.println(mergePla(arr, n));
    }
}
