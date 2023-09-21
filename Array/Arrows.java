import java.util.Arrays;

class Arrows {
    public static int findMinArrowShots(int[][] points) {
        Arrays.sort(points, (a, b) -> Integer.compare(a[1], b[1]));
        int last = points[0][1];
        int arrow = 1;
        for (int i = 0; i < points.length; i++) {
            if (last < points[i][0]) {
                arrow++;
                last = points[i][1];
            }
        }
        return arrow;
    }

    public static void main(String[] args) {
        int[][] points = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
        System.out.println(findMinArrowShots(points));
    }
}