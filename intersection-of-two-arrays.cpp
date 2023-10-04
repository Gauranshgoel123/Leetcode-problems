class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //Sort nums1 and nums2
        //Remove Duplicates
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        //Merge both
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        //sort again
        sort(nums1.begin(), nums1.end());
        nums2.clear();
        // Find Common Elements and return result
        for (size_t i = 0; i < nums1.size()-1; i++)
        {
            if (nums1.at(i)==nums1.at(i+1))nums2.push_back(nums1.at(i));
        }
        return nums2;

