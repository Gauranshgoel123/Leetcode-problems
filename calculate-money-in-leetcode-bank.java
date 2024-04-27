class Solution {
    public int totalMoney(int n) {
        int sum=0;
        int q=n/7;
        int r=n%7;
        int a=0;
        for(int i=0;i<q;i++){
            a++;
            sum+=(7*(2*a+6))/2;
            //this will give sum till weeks
        }
        for(int i=0;i<r;i++){
            a++;
            sum+=a;
            //this is the sum of remaining days
        }
        return sum;
    }
}
