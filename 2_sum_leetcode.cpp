class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        mp.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            auto y = mp.find(target - nums[i]);

            if (y != mp.end()) {
                return {y->second, i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
