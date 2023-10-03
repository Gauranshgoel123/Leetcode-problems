class Solution {
public:
    int strStr(string haystack, string needle) {
     //  2 POINTER APPROACH 
        int n=haystack.length();        //end of haystack
        int m=needle.length();          //end of needle
        int i=0;                        //start of haystack
        int j=0;                        //start of needle
        int index;
        while(i<n && j<m)
        {
            index=i;
            while(haystack[i]==needle[j] && j<m && i<n)
            {
                j++;
                i++;
            }
            if(j==m)
            {
                return index;
            }
             else if(j<m && haystack[i]!=needle[j])
            {
                j=0;
                i=index+1;
            }
        }
        return -1;
    }
};