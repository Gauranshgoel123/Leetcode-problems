/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int len=mountainArr.length();

        // 1. Find the index of the peak element
        int low=1;
        int high=len-2;
        while(high!=low){
            int letpeakindex=(low+high)/2;
            if(mountainArr.get(letpeakindex)<mountainArr.get(letpeakindex+1)){
                low=letpeakindex+1;
            }
            else{
                high=letpeakindex;
            }
        }
        int peakindex=low;

        // 2. Search in the strictly increasing part of the array
        low=0;
        high=peakindex;
        while(low!=high){
            int idx=(low+high)/2;
            if(mountainArr.get(idx)<target){
                low=idx+1;
            }
            else{
                high=idx;
            }
        }
        // Check if the target is present in the strictly increasing part
        if(mountainArr.get(low)==target){
            return low;
        }

        // 3. Otherwise, search in the strictly decreasing part
        low=peakindex+1;
        high=len-1;
        while(low!=high){
            int idx=(low+high)/2;
            if(mountainArr.get(idx)>target){
                low=idx+1;
            }
            else{
                high=idx;
            }
        }
        // Check if the target is present in the strictly decreasing part
        if(mountainArr.get(low)==target){
            return low;
        }
        
        return -1;
    }
}






/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 * public int get(int index) {}
 * public int length() {}
 * }
 */

class Solution {
    public int findInMountainArray(int target, MountainArray arr) {
        int peak = findpeak(arr);
        int firstTry = bs(arr, target, 0, peak);
        if (firstTry != -1) {
            return firstTry;
        }
        return bs(arr, target, peak + 1, arr.length() - 1);
    }

    int findpeak(MountainArray arr) {
        int start = 0;
        int end = arr.length() - 1;

        while (start < end) {
            int mid = start - (start - end) / 2;
            if (arr.get(mid) < arr.get(mid + 1)) {
                start = mid+1;
            } else {
                end=mid;
            }
        }
        return start;
    }

    int bs(MountainArray arr, int t, int s, int e) {
        boolean isAsc = arr.get(s) < arr.get(e);
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (arr.get(m) == t) {
                return m;
            }
            if(isAsc){
                if(t>arr.get(m)){
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
            else{
                if(t<arr.get(m)){
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
        }
        return -1;
    }
}
