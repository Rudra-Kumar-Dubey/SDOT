import java.lang.*;
import java.util.*;

public class CompareNum {
    public static void main(String[] args) {
        String s = "How are you all doing 1234 here 456 t 456";
        String k = "";
        Vector<String> arr = new Vector<String>(1);
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            System.out.println("hi");
            if (Character.isDigit(s.charAt(i))) {
                System.out.println("h2");
                if (i + 1 >= s.length()) {
                    break;
                } else {
                    k = k + s.charAt(i);
                    while (Character.isDigit(s.charAt(i + 1)) && i + 1 < s.length() - 1) {
                        System.out.println("hello");
                        i++;
                        k = k + s.charAt(i);
                        if (i + 1 == s.length() - 1 && Character.isDigit(s.charAt(i + 1))) {
                            k = k + s.charAt(i + 1);
                        }
                    }
                    System.out.println(k);
                    arr.add(k);
                    k = "";
                    j++;
                }
                System.out.println("Here");
            }
        }
        System.out.println("outtt");
        System.out.print(arr);
    }
}
