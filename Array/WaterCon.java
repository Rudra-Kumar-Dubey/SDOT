public class WaterCon {
    public static int maxArea(int[] height) {
        int area = 0;
        int i = 0;
        int j = height.length - 1;
        while (i < j) {
            int h = Math.min(height[i], height[j]);
            int w = j - i;
            area = Math.max(area, h * w);
            if (h == height[i]) {
                i++;
            } else {
                j--;
            }
        }
        return area;
    }

    public static void main(String[] args) {
        int[] height = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
        System.out.println(maxArea(height));
    }
}
