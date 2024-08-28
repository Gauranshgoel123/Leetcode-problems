class Solution {
    public boolean isHappy(int n) {
        if(n==1 || n==7 || n==10 || n==100 ) return true;
        if(n>1 && n<10) return false;
        while(n!=1){
            int sum=0;
            while(n!=0){
                int rem=n%10;
                sum+=(rem*rem);
                n=n/10;
            }         
            n=sum;
            if(sum==1||sum==7) return true;
            if(sum>1 && sum<10) return false;
        }
        return false;
    }
}
