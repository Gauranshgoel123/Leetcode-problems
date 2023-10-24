// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {

//         // optimal appraoch

//         vector<int> res;

//         for(int i = 0; i<nums.size(); i++)
//         {
//             if(nums[i] != 0)
//             {
//                 res.push_back(nums[i]);
//             }
//         }

//         while(res.size() != nums.size())
//         {
//             res.push_back(0);
//         }

//         nums = res;

//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int i=0,j=0;
//         while(i<nums.size() && j<nums.size()){
//             if(nums[j]!=0){
//                 swap(nums[i++],nums[j++]);
//             }
//             else{
//                 j++;
//             }
//         }
//     }
// };


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k++]=nums[i];
            }
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};