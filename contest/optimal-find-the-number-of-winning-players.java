class Solution {
    public int winningPlayerCount(int n, int[][] pick) {
        int[][] color=new int[n+1][11];
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<pick.length;i++){

            color[pick[i][0]][pick[i][1]]++;

            if(color[pick[i][0]][pick[i][1]]>pick[i][0]  && !list.contains(pick[i][0])){
                list.add(pick[i][0]);
            }
        }
        return list.size();
    }
}
