class conco {
    public static List<Integer> findSubstring(String s, String[] words) {
        HashMap<String, Integer> have = new HashMap<>();
        for (String word : words) {
            have.put(word, have.getOrDefault(word, 0) + 1);
        }
        List<Integer> ans = new ArrayList<>();
        int n = s.length();
        int num = words.length;
        int len = words[0].length();
        for (int i = 0; i < n - num * len + 1; i++) {
            HashMap<String, Integer> in = new HashMap<>();
            int j = 0;
            while (j < num) {
                String word = s.substring(i + j * len, i + (j + 1) * len);
                if (have.containsKey(word)) {
                    in.put(word, in.getOrDefault(word, 0) + 1);
                    if (in.get(word) > have.get(word)) {
                        break;
                    }
                } else {
                    break;
                }
                j++;
            }
            if (j == num) {
                ans.add(i);
            }
        }
        return ans;
    }

    public static void main(String[] args) {

    }
}