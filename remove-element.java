class Solution {
    public int removeElement(int[] nums, int val) {
        
        int count=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                // nums[count] and nums[i] are swapped
                int temp=nums[i];
                nums[i]=nums[count];
                nums[count]=temp;
                count++;
            }
        }
        return count;
    }
}