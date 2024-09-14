class Solution {
    public int longestSubarray(int[] nums) {
        int max=0;
        for(int i=0;i<nums.length;i++){
            max=Math.max(max,nums[i]);
        }
        int size=0;
        int cur=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==max){
                cur++;
                size=Math.max(size,cur);
            }
            else{
                cur=0;
            }
        }
        return size;
    }
}
