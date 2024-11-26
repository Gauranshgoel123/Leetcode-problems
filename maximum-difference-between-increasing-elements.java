class Solution {
    public int maximumDifference(int[] nums) {
        int max=-1;
        int leftmin=nums[0];
        for(int i=1;i<nums.length;i++){
            int val=nums[i];
            if(leftmin<val){
                max=Math.max(max,val-leftmin);
            } 
            leftmin=Math.min(leftmin,val);
        }
        return max;
    }
}
