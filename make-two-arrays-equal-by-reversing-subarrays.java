class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        if(target.length!=arr.length)   return false;
        int[] count=new int[1001];
        for(int i=0;i<target.length;i++){
            count[target[i]]++;
            count[arr[i]]--;
        }
        for(int c:count){
            if(c!=0){
                return false;
            }
        }
        return true ;
    }
}

//less optimal


// class Solution {
//     public boolean canBeEqual(int[] target, int[] arr) {
//         Arrays.sort(target);
//         Arrays.sort(arr);
//         if(target.length!=arr.length)   return false;
//         for(int i=0;i<arr.length;i++){
//             if(target[i]!=arr[i])   return false;
//         }
//         return true ;
//     }
// }
