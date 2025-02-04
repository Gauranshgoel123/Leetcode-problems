class Solution {
    public int maxAscendingSum(int[] nums) {
        int sum=0;
        sum=nums[0];
        int x=0;
        int s=0;
        int e=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                e=i;
                x=sub(nums,s,e);
                sum=Math.max(sum,x);
            }
            else{
                s=i;
            }
        }
        return sum;
    }
    private int sub(int[] nums, int s, int e){
        int sum=0;
        for(int i=s;i<=e;i++){
            sum+=nums[i];
        }
        return sum;
    }
}
