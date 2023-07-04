
// You are using Java
import java.util.*;

class Niranjan {
    public static void main(String[] arg) {
        try (Scanner sc = new Scanner(System.in)) {
            List<Integer> a = new ArrayList<Integer>();
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if (!a.contains(arr[i])) {
                    a.add(arr[i]);
                }
            }
            int j = 0;
            int count;
            ArrayList<Integer> p = new ArrayList<Integer>();
            for (int i = 0; i < a.size(); i++) {
                p.clear();
                count = 0;
                for (j = 0; j < n; j++) {
                    if (a.get(i) == arr[j]) {
                        p.add(j);
                        count++;
                    }
                }
                if (count > 1) {
                    System.out.println("Similar element : " + a.get(i));
                    System.out.print("Positions : ");
                    for (int k = 0; k < p.size(); k++) {
                        System.out.print(p.get(k) + 1 + " ");
                    }
                    System.out.println();
                    System.out.println("Occurence : " + count);
                }
            }
        }
    }
}
