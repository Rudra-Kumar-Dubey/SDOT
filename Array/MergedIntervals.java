import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Stack;

public class MergedIntervals {

    // optimized
    public int[][] mergeop(int[][] intervals) {
        if (intervals == null || intervals.length <= 1) {
            return intervals;
        }

        // Sort the intervals based on their start times
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        Stack<int[]> mergedStack = new Stack<>();
        mergedStack.push(intervals[0]);

        for (int i = 1; i < intervals.length; i++) {
            int[] currentInterval = mergedStack.peek();
            int[] nextInterval = intervals[i];

            // If the current interval overlaps with the next interval, merge them
            if (currentInterval[1] >= nextInterval[0]) {
                currentInterval[1] = Math.max(currentInterval[1], nextInterval[1]);
            } else {
                // If there is no overlap, push the next interval onto the stack
                mergedStack.push(nextInterval);
            }
        }

        // Convert the stack to an array of intervals
        int[][] mergedIntervals = new int[mergedStack.size()][2];
        int index = mergedIntervals.length - 1;
        while (!mergedStack.isEmpty()) {
            mergedIntervals[index--] = mergedStack.pop();
        }

        return mergedIntervals;
    }

    public static int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length <= 1) {
            return intervals;
        }

        // Sort the intervals based on their start times
        Arrays.sort(intervals, Comparator.comparingInt(a -> a[0]));

        List<int[]> mergedIntervals = new ArrayList<>();
        int[] currentInterval = intervals[0];

        for (int i = 1; i < intervals.length; i++) {
            int[] nextInterval = intervals[i];

            // If the current interval overlaps with the next interval, merge them
            if (currentInterval[1] >= nextInterval[0]) {
                currentInterval[1] = Math.max(currentInterval[1], nextInterval[1]);
            } else {
                // Otherwise, add the current interval to the result list and update
                // currentInterval
                mergedIntervals.add(currentInterval);
                currentInterval = nextInterval;
            }
        }

        // Add the last interval to the result list
        mergedIntervals.add(currentInterval);

        return mergedIntervals.toArray(new int[mergedIntervals.size()][]);
    }

    public static void main(String[] args) {
        // Example usage:
        int[][] intervals = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
        int[][] mergedIntervals = merge(intervals);

        for (int[] interval : mergedIntervals) {
            System.out.println(Arrays.toString(interval));
        }
    }
}
