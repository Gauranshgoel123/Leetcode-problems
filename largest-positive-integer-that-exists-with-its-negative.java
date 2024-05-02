class Solution {
    public int findMaxK(int[] nums) {
        int[] map=new int[1001];
        int max=-1;
        for(int i:nums){
            if(i<0)
                map[-i]=i;
        }
        for(int i : nums){
            if(i>0 && map[i]!=0) 
                 max=Math.max(max,i);
        }
        return max;
    }
}

// Less opitimised solution beats 68%
// class Solution {
//     public int findMaxK(int[] nums) {
//         Arrays.sort(nums);
//         int left=0;
//         int right=nums.length-1;
//         int maxk=0;
//         while(left<right){
//             int sum=nums[left]+nums[right];
//             if(sum==0){
//                 maxk=Math.max(maxk,nums[right]);
//                 left++;
//                 right--;
//             }
//             else if(sum<0){
//                 left++;
//             }
//             else right--;
//         }
//         if(maxk!=0){
//             return maxk;
//         }
//         else return -1;
//     }
// }
