class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            //insert(index,value)
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};