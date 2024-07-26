class Solution {
    public int reverse(int x) {
        int num=Math.abs(x); //taking absolute of original x
        int ans=0;
        while(num>0){
            int rem=num%10;
            if(ans>(Integer.MAX_VALUE-rem)/10){
                //Integer.MAX_VALUE is a constant in Java that represents the maximum value an int can hold. It is part of the Integer class and is used to get the highest value that an int type variable can store, which is 
                return 0;
            }
            ans=(ans*10)+rem;
            num=num/10;
        }
        return (x<0)?(-ans):(ans);
    }
}
