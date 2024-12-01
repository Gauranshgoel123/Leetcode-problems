class Solution {
    public boolean checkIfExist(int[] arr) {
        HashSet<Integer> set=new HashSet<>();
        for(int i:arr){
            if(set.contains(2*i) || (set.contains(i/2) && i%2==0)){
                return true;
            }     
            set.add(i);
        }
        return false;
    }
}
