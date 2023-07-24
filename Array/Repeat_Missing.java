import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public class Repeat_Missing {
    static int[] findTwoElement(int arr[], int n) {
        int out[] = new int[2];
        Map<Integer, Integer> map = new HashMap<>();
        int originalSum = 0;
        int arraySum = 0;

        for (int i = 1; i <= n; i++)
            originalSum += i;
        for (int i = 0; i < n; i++)
            arraySum += arr[i];

        for (int i = 0; i < n; i++) {
            if (map.containsKey(arr[i])) {
                out[0] = arr[i];
                break;
            } else {
                map.put(arr[i], 1);
            }
        }
        int resSum = arraySum - out[0];
        out[1] = originalSum - resSum;
        return out;
    }

    static int[] findTwoElement1(int arr[], int n) {
        HashSet<Integer> set = new HashSet<>(n);
        for (int i = 0; i < n; i++) {
            set.add(i + 1);
        }
        int[] rm = new int[2];
        HashSet<Integer> s = new HashSet<>(n - 1);
        for (int i = 0; i < n; i++) {
            if (s.contains(arr[i])) {
                rm[0] = arr[i];
            }
            s.add(arr[i]);
        }
        for (int i : set) {
            if (!s.contains(i)) {
                rm[1] = i;
                break;
            }
        }
        return rm;

    }

    static int[] findTwoElement2(int arr[], int n) {
        int out[] = new int[2];
        int s = n + 1;
        for (int i = 0; i < s - 1; i++) {
            int idx = arr[i] % s;
            arr[idx - 1] += s;
        }
        for (int i = 0; i < s - 1; i++) {
            if (arr[i] / s > 1)
                out[0] = i + 1;
            if (arr[i] < s)
                out[1] = i + 1;
        }
        return out;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 3, 3 };
        int n = arr.length;
        int out[] = new int[2];
        out = findTwoElement2(arr, n);
        for (int i = 0; i < 2; i++) {
            System.out.print(out[i] + " ");
        }
    }
}
