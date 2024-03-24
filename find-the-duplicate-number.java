class Solution {
    public int findDuplicate(int[] nums) {
        boolean[] taken = new boolean[nums.length];
        for(int num : nums){
            if(taken[num])
                return num;
            taken[num]=true;
        }
        return -1;
    }
}
