import java.util.*;

public class Hindex {
    public int hIndex(int[] citations) {
        Arrays.sort(citations);
        int h = 0;
        if (citations.length == 1) {
            if (citations[0] == 0) {
                return 0;
            } else {
                return 1;
            }
        }
        for (int i = citations.length - 1; i >= 0; i--) {
            int minn = citations.length - i;
            if (citations.length - 1 >= citations[i]) {
                minn = Math.min(minn, citations[i]);
            }
            h = Math.max(h, minn);
        }
        return h;
    }

    public int hIndexOP(int[] citations) {
        int low = 0, high = citations.length;
        while (low < high) {
            int mid = (low + high + 1) / 2;
            int cnt = 0;
            for (int i = 0; i < citations.length; i++) {
                if (citations[i] >= mid)
                    cnt++;
            }
            if (cnt >= mid)
                low = mid;
            else {
                high = mid - 1;
            }
        }
        return low;
    }

    public static void main(String[] args) {
        int[] input = { 1, 2, 3, 2, 2, 5, 1 };
        Hindex h = new Hindex();
        System.out.println(h.hIndexOP(input));
    }
}
