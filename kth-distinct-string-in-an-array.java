class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String,Integer> map=new HashMap<>();
        for(int i=0;i<arr.length;i++){
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
        }
        for(String s:arr){
            if(map.get(s)==1){
                k--;
            }
            if(k==0){
                return s;
            }
        } 
        return "";
    }
}
