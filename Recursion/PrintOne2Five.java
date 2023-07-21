import java.util.*;

public class PrintOne2Five {
    public static void OTF(int n) {
        if (0 == n) {
            return;
        }
        System.out.println(n);
        OTF(n - 1);
    }

    public static void printNum(int n, int i) {
        if (i == n + 1) {
            return;
        }
        System.out.println(i);
        printNum(n, i + 1);
    }

    public static void main(String[] args) {
        int n = 5;
        OTF(n);
        printNum(n, 1);
    }
}
