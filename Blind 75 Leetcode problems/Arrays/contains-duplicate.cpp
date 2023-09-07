//this solution only for small input array nums
//O(n^2)
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        for(int i=0;i<nums.size()-1;i++){
//            for(int j=i+1;j<nums.size();j++){
//               if(nums[i]==nums[j]){
//                    return true;
//                }
//            }
//        }
//        return false;
//    } 
//};

//O(nlogn) by sorting
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//       sort(nums.begin(), nums.end());
//        for(int i=1;i<nums.size();i++){
//            if(nums[i]==nums[i-1]){
//                return true;
//            }
//        }
//        return false;
//    }
//};
//O(n) hash set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums){
            if(seen.count(num)>0)
                return true;
            seen.insert(num);
        }
        return false;
    }
};


