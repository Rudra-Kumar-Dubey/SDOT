import java.util.*;

public class trapRain {

    // Brute Force and Worst Method but cool
    public static int trap(int[] height) {
        int maxHeight = height[0];
        int count = 0;
        for (int i = 1; i < height.length; i++) {
            maxHeight = Math.max(maxHeight, height[i]);
        }
        int[][] space = new int[maxHeight][height.length];
        for (int j = 0; j < height.length; j++) {
            int h = height[j];
            for (int i = maxHeight - 1; i >= 0; i--) {
                if (h > 0) {
                    space[i][j] = 1;
                } else {
                    space[i][j] = 0;
                }
                h--;
            }
        }
        for (int i = 0; i < maxHeight; i++) {
            for (int j = 0; j < height.length; j++) {
                System.out.print(space[i][j] + " ");
            }
            System.out.println();
        }
        int lastI = -1;
        for (int i = 0; i < maxHeight; i++) {
            lastI = -1;
            for (int j = 0; j < height.length; j++) {
                if (space[i][j] == 1) {
                    if (lastI != -1) {
                        count += j - lastI - 1;
                    }
                    lastI = j;
                }
            }
        }
        return count;
    }

    public int trapOP(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int l_max = 0;
        int r_max = 0;
        int result = 0;
        while (left <= right) {
            if (r_max <= l_max) {
                result += Math.max(0, r_max - height[right]);
                r_max = Math.max(r_max, height[right]);
                right--;
            } else {
                result += Math.max(0, l_max - height[left]);
                l_max = Math.max(l_max, height[left]);
                left++;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int height[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
        System.out.println(trap(height));
    }
}