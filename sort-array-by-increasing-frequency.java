class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer,Integer> freq= new HashMap<>();
        for(int i:nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        //if frequency equals then decreasing order that is b-a
        //else increasing order comparator
        PriorityQueue<Integer> pq=new PriorityQueue<>((a,b) -> (freq.get(a)==freq.get(b) ? b-a : freq.get(a)-freq.get(b)));
        //add all keys to priority queue from hashmap
        pq.addAll(freq.keySet());
        int[] ans=new int[nums.length];
        int j=0;
        //traversal
        while(!pq.isEmpty()){
            //get val from queue
            //poll() function is used to retrive or remove head of the priority queue
            int val=pq.poll();
            //get freq of that val from hashmap
            int count=freq.get(val);
            //insert into ans array count numbr of times the value is present
            for(int i=0;i<count;i++){
                ans[j++]=val;
            }
        }
        return ans;       
    }
}
