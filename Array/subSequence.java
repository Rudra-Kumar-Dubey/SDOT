public class subSequence {
    public static boolean isSubsequence(String s, String t) {
        int index = 0;
        if (index == s.length()) {
            return true;
        }
        for (int i = 0; i < t.length(); i++) {
            if (s.charAt(index) == t.charAt(i)) {
                index++;
            }
            if (index == s.length()) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        String s = "abc";
        String t = "akeeeibeifc";
        System.out.println(isSubsequence(s, t));
    }
}
