class Solution {
    public int getLucky(String s, int k) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int temp=s.charAt(i)-96;
            while(temp>0){
                int rem=temp%10;
                sum+=rem;
                temp/=10;
            }
        }
        k--;
        while(k>0){
            int num=sum;
            sum=0;
            int temp=num;
            while(temp>0){
                int rem=temp%10;
                sum+=rem;
                temp/=10;
            }
            k--;
        }
        return sum;
      
    }
}
