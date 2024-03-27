class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int left = 0,  product = 1, count = 0;
        int n = nums.length;
        for(int right=0;right<n;right++){
            product*=nums[right];
            while(product>=k && left<=right){
                product/=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
}
