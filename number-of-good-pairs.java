class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count=0;
        int[] cnt=new int[101];
        for(int a:nums){
            count+=cnt[a];
            cnt[a]++;
        }
        return count;
    }
}

/*Here there will be 2 cases
if element/number is present in the map that means for example at any time in unordered map we saw count of num(element) 1 is 2 thats means currunt element can form 2 pair with previous 1, so at that time we will add this count in answer and also increase the count of the element in out map
If element/number is not present in the map, it means this is the first time we're seeing this number, so we initialize its count to 1.
 */
