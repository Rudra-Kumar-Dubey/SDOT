public class Candies {
    public static int candy(int[] ratings) {
        int arr[] = new int[ratings.length];
        arr[0] = 1;
        for (int i = 1; i < ratings.length; i++) {
            if (ratings[i] > ratings[i - 1]) {
                arr[i] += arr[i - 1] + 1;
            } else {
                arr[i] = 1;
            }
        }
        int candies = arr[ratings.length - 1];
        for (int i = arr.length - 2; i >= 0; i--) {
            int cur = 1;
            if (ratings[i] > ratings[i + 1]) {
                cur = arr[i + 1] + 1;
            }
            candies += Math.max(cur, arr[i]);
            arr[i] = cur;
        }
        return candies;
    }

    public static void main(String[] args) {
        int[] ratings = { 1, 2, 2 };
        System.out.println(candy(ratings));
    }
}
