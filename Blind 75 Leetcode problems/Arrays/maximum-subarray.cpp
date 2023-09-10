class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currentsum=nums[0];
        for (int i=1 ; i<n ; i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            maxsum=max(maxsum,currentsum);
            }
        return maxsum;
    }
};