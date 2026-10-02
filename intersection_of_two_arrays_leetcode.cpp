class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> nums3;
        int i=0;
        for(i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]=i;
        }
        for(i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end() && find(nums3.begin(),nums3.end(),nums2[i])==nums3.end())
            {
                nums3.push_back(nums2[i]);
            }
        }
        return nums3;
    }
};
