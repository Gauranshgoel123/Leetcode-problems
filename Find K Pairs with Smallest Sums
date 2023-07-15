class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        
        priority_queue<pair<int,vector<int>>>pq;
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(pq.size()<k)
                {
                    pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                }
                else if(pq.size()==k)
                {
                    if(nums1[i]+nums2[j] < pq.top().first)
                    {
                        pq.pop();
                        pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    pq.pop();
                }
                
            }
        }
        vector<vector<int>> v;
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
        
