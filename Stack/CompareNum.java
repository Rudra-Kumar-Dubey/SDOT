import java.util.*;

public class CompareNum {
    public static void main(String[] args) {
        String s = "How are you all doing 1234 here 456 t 456";
        String k = "";
        Vector<String> arr = new Vector<String>(1);
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                if (i + 1 >= s.length()) {
                    break;
                } else {
                    k = k + s.charAt(i);
                    while (Character.isDigit(s.charAt(i + 1)) && i + 1 < s.length() - 1) {
                        i++;
                        k = k + s.charAt(i);
                        if (i + 1 == s.length() - 1 && Character.isDigit(s.charAt(i + 1))) {
                            k = k + s.charAt(i + 1);
                        }
                    }
                    System.out.println(k);
                    arr.add(k);
                    k = "";
                }
            }
        }
        System.out.print(arr);
    }
}
