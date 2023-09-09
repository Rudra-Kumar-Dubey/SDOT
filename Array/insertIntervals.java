import java.util.ArrayList;
import java.util.List;

public class insertIntervals {
    public static int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> ans = new ArrayList<>();
        if (intervals == null) {
            ans.add(newInterval);
            return ans.toArray(new int[ans.size()][]);
        }
        for (int i = 0; i < intervals.length; i++) {
            if (newInterval[1] < intervals[i][0]) {
                ans.add(newInterval);
                for (int j = i; j < intervals.length; j++) {
                    ans.add(intervals[j]);
                }
                return ans.toArray(new int[ans.size()][]);
            } else if (newInterval[0] > intervals[i][1]) {
                ans.add(intervals[i]);
            } else {
                newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
                newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
            }
        }
        ans.add(newInterval);
        return ans.toArray(new int[ans.size()][]);
    }

    public static void main(String[] args) {
        int[][] intervals = { { 1, 2 }, { 3, 6 }, { 8, 10 }, { 15, 18 } };
        int[] newInterval = { 4, 8 };
        intervals = insert(intervals, newInterval);
        System.out.print("[");
        int j = 0;
        for (int i[] : intervals) {
            if (j == 0) {
                System.out.print("[ " + i[0] + ", " + i[1] + " ]");
                j++;
            } else {
                System.out.print(", " + "[ " + i[0] + ", " + i[1] + " ]");
            }
        }
        System.out.print("]");
    }
}
