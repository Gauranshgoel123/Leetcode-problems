class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer,Integer> freq= new HashMap<>();
        for(int i:nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        PriorityQueue<Integer> pq=new PriorityQueue<>((a,b) -> (freq.get(a)==freq.get(b) ? b-a : freq.get(a)-freq.get(b)));
        pq.addAll(freq.keySet());
        int[] ans=new int[nums.length];
        int j=0;
        while(!pq.isEmpty()){
            int val=pq.poll();
            int count=freq.get(val);
            for(int i=0;i<count;i++){
                ans[j++]=val;
            }
        }
        return ans;       
    }
}
