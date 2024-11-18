class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> counter = new HashMap<>();
        for (int n : nums) {
            counter.put(n, counter.getOrDefault(n, 0) + 1);
        }
        
        List<Integer>[] freq = new ArrayList[nums.length + 1];
        for (int i = 0; i < freq.length; i++) {
            freq[i] = new ArrayList<>();
        }
        /*An array of List<Integer> called freq is created with nums.length + 1 buckets.
        Each index i in freq represents a list of numbers that appear i times in nums.
        The length of nums + 1 ensures that we can represent frequencies from 0 to nums.length (the maximum possible frequency).*/

        for (Map.Entry<Integer, Integer> entry : counter.entrySet()) {
            int frequency = entry.getValue();
            freq[frequency].add(entry.getKey());
        }
        //Populate the Bucket Array
        //Iterate over the entries in the counter map. For each entry, add the key (the number) to the list at the index corresponding to its frequency in freq.
        
        int[] res = new int[k];
        int idx = 0;
        for (int i = freq.length - 1; i >= 0; i--) {
            for (int num : freq[i]) {
                res[idx++] = num;
                if (idx == k) {
                    return res;
                }
            }
        }
        /* Start iterating from the end of freq (the highest possible frequency) down to 0.
        For each non-empty bucket, add the elements to res until k elements have been collected.
        If idx reaches k, return the res array. */
                
        return new int[0];        
    }
}





class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> counter = new HashMap<>();
        for (int n : nums) {
            counter.put(n, counter.getOrDefault(n, 0) + 1);
        }
        
        PriorityQueue<Map.Entry<Integer, Integer>> heap = new PriorityQueue<>(
            (a, b) -> Integer.compare(b.getValue(), a.getValue())
        );
        //A PriorityQueue named heap is created to act as a max heap based on the frequency of the elements.
        //The comparator (a, b) -> Integer.compare(b.getValue(), a.getValue()) ensures that entries with higher frequencies are given higher priority, making it a max heap.
        
        for (Map.Entry<Integer, Integer> entry : counter.entrySet()) {
            heap.offer(entry);
        }
        //Each entry from the counter map is added to the heap. The heap will order the entries such that the element with the highest frequency is at the top.
        
        int[] res = new int[k];
        for (int i = 0; i < k; i++) {
            res[i] = Objects.requireNonNull(heap.poll()).getKey();
        }
        //The heap.poll() method retrieves and removes the element at the top of the heap (i.e., the element with the highest frequency). The getKey() method extracts the number, which is added to res.
        //Objects.requireNonNull() ensures that poll() does not return null, adding a layer of safety.
        return res;        
    }
}




class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> frequencyMap = new HashMap<>();
        
        for (int n : nums) {
            frequencyMap.put(n, frequencyMap.getOrDefault(n, 0) + 1);
        }
        
        List<Map.Entry<Integer, Integer>> entryList = new ArrayList<>(frequencyMap.entrySet());
        
        Collections.sort(entryList, (a, b) -> b.getValue()- a.getValue());
        
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = entryList.get(i).getKey();
        }
        
        return result;
    }
}
