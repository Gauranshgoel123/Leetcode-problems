//python code:
// class Solution(object):
//     def removeDuplicates(self, nums):
//         """
//         :type nums: List[int]
//         :rtype: int
//         """
//         nums[:]=sorted(set(nums))
//         """nums =  doesn't replace elements in the original list.
//            nums[:] = replaces element in place"""
//         return len(nums)

class Solution {
    public int removeDuplicates(int[] nums) {
        //we just need to deal with the unique ones
        //we will check if unique and then swap and count++
        int j = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
}
