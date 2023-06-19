public class OneEnd {
    public static void main(String[] args) {
        String s = "11001";
        String ans = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1') {
                count++;
            }
        }
        for (int i = 0; i < count; i++) {
            ans = ans + '1';
        }
        for (int i = 0; i < s.length() - count; i++) {
            ans = ans + '0';
        }
        System.out.println(ans);
    }
}
