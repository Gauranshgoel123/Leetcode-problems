//BRUTE FORCE APPROACH COMPARATIVE HIGHER RUNTIME
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

//HASH TABLE OPTIMIZED APPROACH
//RUM TIME 4MS
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; 
        //We will select the element of the array one by one using a loop(say i).
        for (int i = 0; i < nums.size(); i++) {
            //Then we will check if the other required element(i.e. target-arr[i]) exists in the hashMap.
            int complement = target - nums[i];
            //f that element exists, then we will return “YES” for the first variant or we will return the current index i.e. i, and the index of the element found using map i.e. mp[target-arr[i]]
            if (numMap.find(complement) != numMap.end()) {/*means complement exists*/
                return {numMap[complement], i};
            }
            //If that element does not exist, then we will just store the current element in the hashMap along with its index. Because in the future, the current element might be a part of our answer.
            numMap[nums[i]] = i;
        }
        return {};
    }
};
