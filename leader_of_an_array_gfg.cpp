class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int i;
        vector<int>arr1;
        int n=arr.size();
        int max=arr[n-1];
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]>=max)
            {
                arr1.push_back(arr[i]);
                max=arr[i];
                continue;
            }
        }
        reverse(arr1.begin(),arr1.end());
        return arr1;
    }
};
