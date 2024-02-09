class Solution {
public:
    int mySqrt(int x) {
        //BINARY SEARCH APPLICATION

        //O(LOGN) TIME COMPLEXITY WHICH IS BETTER
        // THAN O(SQRTN) GENERAL COMPLEXITY
        //O(1) SPACE COMPLEXITY

        //BEATS 100% 0MS RUNTIME

        //CAREFULLY SEE THE CONDITIONS IN IF ELSE BLOCK 
        //WE HAVE USED SO TO AVOID OVERFLOW CONDITION
        //REFER FOR VIDEO: https://youtu.be/1_4xlky3Y2Y
        if(x == 0 )
            return x;
        
        int first = 1, last = x;

        while(first <= last){
            int mid = first + (last - first)/2; //AVOID OVERFLOW

            if(mid == x/mid)                    //AVOID OVERFLOW
                return mid;
            else if(mid > x/mid){               //AVOID OVERFLOW
                last = mid - 1;
            }
            else{
                first = mid + 1;
            }
        }
        return last;            //FOR NEAREST ROUNDED OFF
    }
};