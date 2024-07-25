class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int l=0,r=0;
        long total=0,ans=0;
        while(r<nums.length){
            total+=nums[r];
            //if window invalid
            while(nums[r]*(r-l+1L)>total+k){
                total-=nums[l];
                l+=1;
            }
            ans=Math.max(ans,r-l+1L);
            r+=1;
        }
        return (int) ans;
    }
}
