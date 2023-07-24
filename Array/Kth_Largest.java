import java.util.*;

public class Kth_Largest {
    // Min Heap
    public static int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for (int i = 0; i < nums.length; i++) {
            minHeap.add(nums[i]);
            if (minHeap.size() > k) {
                minHeap.remove();
            }
        }
        return minHeap.peek();
    }

    // Optimized
    public int findKthLargestOp(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for (int i = 0; i < k; i++) {
            minHeap.add(nums[i]);
        }
        for (int i = k; i < nums.length; i++) {
            if (minHeap.peek() < nums[i]) {
                minHeap.remove();
                minHeap.add(nums[i]);
            }
        }
        return minHeap.peek();
    }

    // best solution
    public int findKthLargestBest(int[] nums, int k) {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;

        // find min and max
        for (int i = 0; i < nums.length; i++) {
            min = Math.min(nums[i], min);
            max = Math.max(nums[i], max);
        }

        int[] count = new int[max - min + 1];

        for (int i = 0; i < nums.length; i++) {
            count[nums[i] - min]++;
        }

        int freq = k;
        for (int i = count.length - 1; i >= 0; i--) {
            freq -= count[i];
            if (freq <= 0) {
                return i + min;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int arr[] = { 3, 2, 1, 5, 6, 4 };
        int k = 2;
        System.out.println(findKthLargest(arr, k));
    }
}
