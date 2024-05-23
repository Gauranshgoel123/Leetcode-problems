//https://www.youtube.com/watch?v=NFv0qii2jpY

// class Solution {
//     public int beautifulSubsets(int[] nums, int k) {
//         Arrays.sort(nums);
//         int[] map = new int[1003];
//         return recurse(nums, map, 0, k) - 1;
//     }

//     private int recurse(int[] nums, int[] map, int i, int k) {
//         if (i >= nums.length) {
//             return 1;
//         }

//         int taken = 0;
//         int val = nums[i];
//         if (val - k < 0 || map[val - k] == 0) {
//             map[val] += 1;
//             taken = recurse(nums, map, i + 1, k);
//             map[val] -= 1;
//         }

//         int notTaken = recurse(nums, map, i + 1, k);
//         return taken + notTaken;
//     }
// }

class Solution {
    int count=0;
    Map<Integer,Integer> visited=new HashMap<>();

    public int beautifulSubsets(int[] nums, int k) {
        explore(nums,k,0);
        return count-1;     //remove empty subarray also
   }
   public void explore(int[] nums,int k,int i){
    if(i==nums.length) {
        count++;
        return;
    }
    int num=nums[i];
    if(!visited.containsKey(num-k)&&!visited.containsKey(num+k)){
        visited.put(num,visited.getOrDefault(num,0)+1);
        explore(nums,k,i+1);
        visited.put(num,visited.get(num)-1);
        if(visited.get(num)==0){
            visited.remove(num);
        }
    }
    explore(nums,k,i+1);
   }
}
