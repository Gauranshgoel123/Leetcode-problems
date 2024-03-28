class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        HashMap <Integer,Integer> freq = new HashMap();
        int ans=0;  //length of longest subarray
        int start=-1;
        for(int end=0;end<nums.length;end++){
            //input into freq map
            freq.put(nums[end],freq.getOrDefault(nums[end],0)+1);
            //if freq of any elemenet in map greater than k
            while(freq.get(nums[end])>k){
                start++;
                freq.put(nums[start],freq.get(nums[start])-1);
            }
            //calculate and store max subarray length
            ans=Math.max(ans,end-start);
        }
        return ans;

    }
}
