public class revWord {
    public static String reverseWords(String s) {
        String str = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) == ' ') {
                continue;
            } else {
                int r = i + 1;
                int l = i;
                while (i >= 0 && s.charAt(i) != ' ') {
                    i--;
                }
                i++;
                l = i;
                str += s.substring(l, r);
                str += " ";
            }
        }
        str = str.substring(0, str.length() - 1);
        return str;
    }

    public static void main(String[] args) {
        String s = "the sky is blue";
        System.out.println(reverseWords(s));
    }
}
