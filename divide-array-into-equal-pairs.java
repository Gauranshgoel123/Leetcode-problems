class Solution {
    public boolean divideArray(int[] nums) {
        int xor=0;
        int[] freq = new int[501];
        for(int i:nums){
            freq[i]++;
            xor^=i;
        }
        if(xor!=0) return false;
        for(int count:freq){
            if(count %2 != 0){
                return false;
            }
        }
        return true;
    }
}
