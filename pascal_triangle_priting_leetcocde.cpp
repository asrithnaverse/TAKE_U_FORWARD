class Solution {
public:
    vector<int>generaterow(int a)
    {
        long long i;
        long long ans=1;
        vector<int>arr;
        arr.push_back(1);
        for(i=1;i<a;i++)
        {
            ans=ans*(a-i);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr1;
        long long i;
        for(i=1;i<=numRows;i++)
        {
            arr1.push_back(generaterow(i));
        }
        return arr1;
    }
};
