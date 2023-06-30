class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
    for(int i=s.length() -1; i>=0  ;i--){
        if(s[i]!=' '){
            count++;
            continue;
        }
        else if(count!=0){
            return count;
        }
    }
    return count;
    
    }
};
