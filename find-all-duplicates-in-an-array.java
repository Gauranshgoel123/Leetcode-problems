class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int len = nums.length;
        int[] array = new int[len + 1];
        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < len; i++) {
            array[nums[i]] += 1;
        }

        for(int i = 1; i <=  len; i++) {
            if(array[i] == 2) {
                list.add(i);
            }
        }

        return list;
    }
}

// class Solution {
//     public List<Integer> findDuplicates(int[] nums) {
//         List<Integer> result = new ArrayList<>();
//         for(int num:nums){
//             int n=Math.abs(num);
//             int idx=n-1;
//             if(nums[idx]<0){
//                 result.add(n);
//             }
//             nums[idx]=nums[idx]*(-1);
//         }
//         return result;
        
//     }
// }
