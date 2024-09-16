class Solution {
    public int findMinDifference(List<String> time) {
        int[] minutes=new int[time.size()];
        for(int i=0;i<time.size();i++){
            String t=time.get(i);
            int h=Integer.parseInt(t.substring(0,2));
            int m=Integer.parseInt(t.substring(3));
            minutes[i]=h*60+m;
        }
        Arrays.sort(minutes);
        int ans=Integer.MAX_VALUE;
        for(int i=0;i<minutes.length-1;i++){
            ans=Math.min(ans,minutes[i+1]-minutes[i]);
        }
        //also check diff between first and last since time circular
        return Math.min(ans,24*60-minutes[minutes.length-1]+minutes[0]);
    }
}
