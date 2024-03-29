class Solution {
    public long countSubarrays(int[] nums, int k) {
        int start=0,maxx=0,maxfreq=0;
        long ans=0;
        for(int num:nums){
           maxx=Math.max(maxx,num);
        }
        for(int end=0;end<nums.length;end++){
            if(nums[end]==maxx){
                maxfreq++;
            }
            while(maxfreq==k){
                if(nums[start]==maxx){
                    maxfreq--;
                }
                start++;
            }
            ans+=start;
        }
        return ans;
    }
}
