//BRUTE FORCE BEATS 50% RUNTIME
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=m;
        int j=0;
        while(i<nums1.length && j<nums2.length){
            nums1[i]= nums2[j];
            i++;
            j++;
        }
        Arrays.sort(nums1);        
    }
}



//USING 2 POINTERS OPTIMAL SOLUTION
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
       int i=m-1;
       int j=n-1;
       int k=m+n-1;
       while(j>=0){
           if( i>=0 && nums1[i] > nums2[j] ) 
                nums1[k--]=nums1[i--];
            else
                nums1[k--]=nums2[j--];
       }
    }
}
