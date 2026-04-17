class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,j,n;
        n=nums.size();
        vector<int> result(n);
        for(i=0;i<n;i++)
        {
            int sum=0;
            for(j=0;j<=i;j++)
            {
                sum+=nums[j];
            }
            result[i]=sum;
            
        }
        return result;
    }
};
