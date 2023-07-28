import java.util.Arrays;
import java.util.Comparator;

public class LargestNum {

    // my solution
    public static String largestNumber(int[] nums) {
        String[] strArray = new String[nums.length];

        for (int i = 0; i < nums.length; i++) {
            strArray[i] = String.valueOf(nums[i]);
        }
        Arrays.sort(strArray, new Comparator<String>() {
            public int compare(String X, String Y) {
                String XY = X + Y;
                String YX = Y + X;
                return XY.compareTo(YX) > 0 ? -1 : 1;
            }
        });
        String ans = "";
        for (int i = 0; i < strArray.length; i++) {
            int j = 0;
            while (i == j && Integer.valueOf(strArray[j]) == 0) {
                if (j + 1 < strArray.length && Integer.valueOf(strArray[j + 1]) == 0) {
                    j++;
                }
                if (i + 1 == strArray.length) {
                    return "0";
                }
                i++;
            }
            ans += strArray[i];
        }
        return ans;
    }

    public static void main(String[] args) {
        int[] nums = { 3, 30, 34, 5, 9 };
        System.out.println(largestNumber(nums));
    }
}
