import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class groupAnagram {
    public static List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList<>();
        int n = strs.length;
        int[] done = new int[n];
        Arrays.fill(done, 0);
        for (int i = 0; i < n; i++) {
            List<String> ls = new ArrayList<>();
            while (i < n && done[i] == 1) {
                i++;
            }
            if (i >= n) {
                break;
            }
            String s = strs[i];
            done[i] = 1;
            ls.add(s);
            for (int j = 0; j < n; j++) {
                if (done[j] != 1) {
                    if (s.length() != strs[j].length()) {
                        continue;
                    }
                    if (isAnagram(s, strs[j])) {
                        ls.add(strs[j]);
                        done[j] = 1;
                    }
                }
            }
            ans.add(ls);
        }
        return ans;
    }

    public static boolean isAnagram(String s, String t) {
        char[] sChars = s.toCharArray();
        char[] tChars = t.toCharArray();

        Arrays.sort(sChars);
        Arrays.sort(tChars);

        return Arrays.equals(sChars, tChars);
    }

    public static void main(String[] args) {
        String[] input = { "eat", "tea", "tan", "ate", "nat", "bat" };
        System.out.println(groupAnagrams(input));
    }
}
