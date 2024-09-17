class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        List<String> output = new ArrayList<>(); 
        HashMap<String, Integer> map = new HashMap<>();
        String s1Str[] = s1.split(" ");
        for(String word: s1Str) {
            map.put(word, map.getOrDefault(word, 0) + 1);
        }
        String s2Str[] = s2.split(" ");
        for (String word : s2Str) {
            map.put(word, map.getOrDefault(word, 0) + 1);
        }
        for (String word : map.keySet()) {
            if (map.get(word) == 1) {
                output.add(word);
            }
        }
        return output.toArray(new String[0]);
    }
}

