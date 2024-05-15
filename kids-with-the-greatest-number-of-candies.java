class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max=0;
        for(int i=0;i<candies.length;i++){
            max=Math.max(max,candies[i]);
        }
        List<Boolean> result=new ArrayList<>();
        for(int i=0;i<candies.length;i++){
            if(candies[i]+extraCandies>=max) result.add(i,true);
            else result.add(i,false);
        }
        return result;
    }
}
