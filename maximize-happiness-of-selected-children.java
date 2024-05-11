class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        Arrays.sort(happiness);
        long ans=0;
        int dec=0;
        int maxindex=happiness.length -1;
        while(k>0){
            ans += happiness[maxindex]>dec ? happiness[maxindex]-dec : 0;
            dec++;
            k--;
            maxindex--;
        }
        return ans;
    }
}
