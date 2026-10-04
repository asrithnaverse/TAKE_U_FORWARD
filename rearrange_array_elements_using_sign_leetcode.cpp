class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>arr;
        int posnum=0;
        int negnum=1;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                arr[posnum]=nums[i];
                posnum+=2;
            }
            if(nums[i]<0)
            {
                arr[negnum]=nums[i];
                negnum+=2;
            }
        }
        return arr;
    }
};
