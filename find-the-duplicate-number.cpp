/*class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while (nums[i] > 0){
            int tmp = nums[i];
            nums[i] = 0;
            i = tmp;
        }
        return i;
    }
};