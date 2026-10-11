class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>arr;
        long long i;
        long long ans=1;
        arr.push_back(1);
        for(i=1;i<n;i++)
        {
            ans=ans*(n-i);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
    }
};
