class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        Set<Integer> prefix=new HashSet<>();
        for(int num:arr1){
            while(!prefix.contains(num) && num>0){
                prefix.add(num);
                num/=10;
            }
        }
        int ans=0;
        System.out.println(prefix);
        for(int val:arr2){
            while(!prefix.contains(val) && val>0){
                val/=10;
            }
            if(val>0)   ans=Math.max(ans,(int)Math.log10(val)+1);
        }
        return ans;
    }
}
