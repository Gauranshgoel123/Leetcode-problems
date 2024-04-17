class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int time=0;
        int chk=tickets[k];
        for(int i=0;i<tickets.length;i++){
            if(i<=k){
                time+=Math.min(chk,tickets[i]);
            }
            else{
                time+=Math.min(chk-1,tickets[i]);
            }
        }
        return time;
    }
}
