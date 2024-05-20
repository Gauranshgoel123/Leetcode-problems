class Solution {
        public int secondHighest(String s) {
        int count = 0;
        for(char ch='9'; ch>='0'; ch--){
            if(s.indexOf(ch) != -1) count++;
            if(count == 2) return ch - '0';
            //we did reverse loop and count==2 coz we need the second largest value
            //ch-'0' gives the value
        }
        return -1;

    }
}

/*
class Solution {
    public int secondHighest(String s) {
        //remove Strings collect only digits & put inside
        String t= s.replaceAll("\\D+","");
        ArrayList<Integer> ls= new ArrayList<>();
        for(int i=0;i<t.length();i++){
            int val= t.charAt(i)-'0';
            if(!ls.contains(val)){
                ls.add(val);
            }
        }
        //debug  printing the arraylist
        if(ls.size()<2) return -1;
        // sort the arraylist 
        Collections.sort(ls, Collections.reverseOrder());
        ls.remove(ls.get(0));
        return ls.get(0);
    }
}

class Solution {
    public int secondHighest(String s) {
        Set<Integer> set=new HashSet();
        for(char c:s.toCharArray()){
            if(Character.isDigit(c)){
                set.add(Integer.parseInt(String.valueOf(c)));
            }
        }
        int max=0;
        for(int i:set)  max=Math.max(i,max);
        int n=-1;
        for(int i:set){
            if(i<max) n=Math.max(i,n);
        }
        return n>=0?n:-1;
    }
}
*/
