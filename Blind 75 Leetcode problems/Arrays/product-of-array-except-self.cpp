//important O(n) solution only:-
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);

        int prefix=1;
        for(int i=0;i<n;i++){
            ans[i]=prefix;
            prefix=prefix*nums[i];
        }        

        int postfix=1;
        for (int i=n-1;i>=0;i--){
            ans[i]=ans[i]*postfix;
            postfix=nums[i]*postfix;
        }
        return ans;
    }
};