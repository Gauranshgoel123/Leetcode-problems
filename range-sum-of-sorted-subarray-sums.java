class Solution {
    private static final int MOD=1000000007;
    public int rangeSum(int[] nums, int n, int left, int right) {
        int maxsum=0;
        for(int i=0;i<n;i++){
            maxsum+=nums[i];
        }
        int[] count=new int[maxsum+1];
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                count[sum]++;
            }
        }
        for(int i=1;i<count.length;i++){
            count[i]+=count[i-1];
        }
        long ans=0;
        int k=1;
        for(int sum=1;sum<=maxsum;sum++){
            while(k<=count[sum]){
                if(k>=left && k<=right){
                    ans=(ans+sum)%MOD;
                }
                k++;
            }
        }
        return (int) ans;
    }
}


//brute force more easy to understand
  

// class Solution {
//     private static final int mod = 1000000007;
//     public int rangeSum(int[] nums, int n, int left, int right) {
//         List<Integer> list=new ArrayList<>();
//         for(int i=0;i<nums.length;i++){
//             int sum=nums[i];
//             list.add(sum);
//             for(int j=i+1;j<n;j++){
//                 sum+=nums[j];
//                 list.add(sum);
//             }
//         }
//         // System.out.print(list);
//         Collections.sort(list);
//         int sum=0;
//         for (int i = left - 1; i < right; i++) {
//             sum = (sum + list.get(i)) % mod;
//         }
//         return sum;
//     }
// }
