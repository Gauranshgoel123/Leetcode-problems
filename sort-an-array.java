class Solution {
    public int[] sortArray(int[] nums) {
        int l=0,r=nums.length-1;
        return mergesort(nums,l,r);
    }
    public int[] mergesort(int[] nums,int l,int r){

        if(l>=r){
            return nums;
        }

        int m=l+(r-l)/2;
        mergesort(nums,l,m);
        mergesort(nums,m+1,r);
        merge(nums,l,m,r);
        return nums;
    }
    public int[] merge(int[] nums,int l,int m,int r){
        int[] leftpart=new int[m-l+1];
        int[] rightpart=new int[r-m];
        System.arraycopy(nums,l,leftpart,0,m-l+1);
        System.arraycopy(nums,m+1,rightpart,0,r-m);
        int i=l,j=0,k=0;
        while(j<leftpart.length && k<rightpart.length){
            if(leftpart[j]<=rightpart[k]){
                nums[i]=leftpart[j];
                j++;
            }
            else{
                nums[i]=rightpart[k];
                k++;
            }
            i++;
        }
        while(j<leftpart.length){
            nums[i]=leftpart[j];
            i++;j++;
        }
        while(k<rightpart.length){
            nums[i]=rightpart[k];
            i++;k++;
        }
        return nums;
    }
}
