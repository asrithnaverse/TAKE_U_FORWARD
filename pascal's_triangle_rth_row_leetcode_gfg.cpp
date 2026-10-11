class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>arr;
        long long i;
        long long ans=1;
        long long row=rowIndex+1;
        arr.push_back(1);
        for(i=1;i<row;i++)
        {
            ans=ans*(row-i);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
    }
};
