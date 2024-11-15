class Solution {
    public long countFairPairs(int[] nums, int lower, int upper) {
        Arrays.sort(nums);
        long upperbound=binarysearch(nums,upper+1);
        long lowerbound=binarysearch(nums,lower);
        return upperbound-lowerbound;
    }
    private long binarysearch(int[] nums,int val){
        long res=0;
        int l=0;
        int r=nums.length-1;
        while(l<=r){
            if(nums[l]+nums[r]<val){
                res+=r-l;
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
}
