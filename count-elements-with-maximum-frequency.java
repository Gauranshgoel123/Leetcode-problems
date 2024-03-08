class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer,Integer> freq= new HashMap<>();
        for(int i : nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        //now freq map contains frequency of each element in nums array
        int maxfreq=0;
        for(int i:freq.values()){
            maxfreq=Math.max(maxfreq,i);
        }
        //and maxfreq contains the maximum frequency from the array
        //now just count the number of elements with that maxfreq
        int count=0;
        for(int i:freq.values()){
            if(maxfreq==i) count+=maxfreq;
        }
        return count;
    }
}
