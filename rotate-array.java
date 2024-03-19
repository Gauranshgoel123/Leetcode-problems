class Solution {
    public void rotate(int[] nums, int k) {
        k = k % nums.length; //find remainder of k divided by nums.length because k can be more than nums.length and we dont need huge iterations
        reverse(nums,0,nums.length-1);//reverse full aray
        reverse(nums,0,k-1);//reverse starting k elements from start
        reverse(nums,k,nums.length-1);//reverse all elements till end after k
    }
    //define reverse function
    void reverse(int[] nums, int start, int end){
        while(start<end){
            swap(nums,start,end);
            start++;
            end--;
        }
    }
    //define swap function
    void swap(int[] nums,int start,int end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
    }
}
