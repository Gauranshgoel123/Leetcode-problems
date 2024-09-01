class Solution {
    public int generateKey(int num1, int num2, int num3) {
        StringBuilder key=new StringBuilder();
        String str1=String.format("%04d",num1);
        String str2=String.format("%04d",num2);
        String str3=String.format("%04d",num3);
        for(int i=0;i<4;i++){
            int dig1=str1.charAt(i) - '0';
            int dig2=str2.charAt(i) - '0';
            int dig3=str3.charAt(i) - '0';
            int mindigit=Math.min(dig1,Math.min(dig2,dig3));
            key.append(mindigit);
        }
        return Integer.parseInt(key.toString());
    }
}
