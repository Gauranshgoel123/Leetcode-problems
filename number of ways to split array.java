class Solution {
    public int waysToSplitArray(int[] nums) {
        long totalsum=0;
        for(int i:nums){
            totalsum+=i;
        }
        int count=0;
        long sum1=nums[0];
        long sum2=totalsum-nums[0];
        for(int i=0;i<nums.length-1;i++){
            if(sum1>=sum2){
                count++;
            }
            sum1=sum1+nums[i+1];
            sum2=sum2-nums[i+1];
        }
        return count;
    }
}


class Solution {
    public int waysToSplitArray(int[] nums) {
        long[] prefix=new long[nums.length];
        prefix[0]=nums[0];
        for(int i=1;i<nums.length;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int count=0;
        long total=prefix[nums.length-1];
        for(int i=0;i<nums.length-1;i++){
            long left=prefix[i];
            long right=total-prefix[i];
            if(left>=right) count++;
        }
        return count;
    }
}
