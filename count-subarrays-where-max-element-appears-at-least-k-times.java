class Solution {
    public long countSubarrays(int[] nums, int k) {
        long res = 0;
        int max = 0, count = 0, n = nums.length;
        // Find the maximum element in the array
        for (int num : nums)
            max = Math.max(max, num);
        int l = 0;
        for (int r = 0; r < n; r++) {
            if (nums[r] == max)
                count++;
            // If count is greater than or equal to k, calculate subarrays count
            while (count >= k) {
                res += n - r;
                if (nums[l] == max)
                    count--;
                l++;
            }
        }
        return res;
    }
}



// class Solution {
//     public long countSubarrays(int[] nums, int k) {
        
//         int start=0;
//         long ans=0;
//         int maxx=0;
//         int maxfreq=0;
//         for(int num:nums){
//            maxx=Math.max(maxx,num);
//         }
//         for(int num:nums){
//             if(num==maxx){
//                 maxfreq++;
//             }
//             while(maxfreq==k){
//                 if(nums[start]==maxx){
//                     maxfreq--;
//                 }
//                 start++;
//             }
//             ans+=start;
//         }
//         return ans;
//     }
// }
