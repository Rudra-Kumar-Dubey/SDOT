
import java.util.*;

class sumEqual {
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = sc.nextInt();
        int[] arr = new int[n];
        int i = 0;
        while (i < n) {
            arr[i] = sc.nextInt();
            i++;
        }
        int sum = 0;
        i = 0;
        int j = 0;
        int flag = 0;
        while (j < n) {
            sum += arr[j];
            while (sum > s && i < j) {
                sum -= arr[i];
                i++;
            }
            if (sum == s) {
                flag = 1;
                System.out.println(i + 1 + " " + (j + 1));
                break;
            }
            j++;
        }
        if (flag == 0) {
            System.out.println(-1);
        }
    }
}
