// class Solution {
//     public List<List<Integer>> subsets(int[] nums) {
//         List<List<Integer>> ans=new ArrayList<>();
//         backtrack(nums,0,new ArrayList<>(),ans);
//         return ans;
//     }
//     private void backtrack(int[] nums,int start, List<Integer> path, List<List<Integer>> ans){
//         ans.add(new ArrayList<>(path));
//         for(int i=start;i<nums.length;i++){
//             path.add(nums[i]);
//             backtrack(nums,i+1,path,ans);
//             path.remove(path.size()-1); //remove last elemnt from path after recusrive backtracking
//         }
//     }
// }

class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        result.add(new ArrayList<>()); // Add the empty subset
        for (int num : nums) {
            int size = result.size();
            for (int i = 0; i < size; i++) {
                List<Integer> subset = new ArrayList<>(result.get(i));
                subset.add(num);
                result.add(subset);
            }
        }
        return result;
    }
}
