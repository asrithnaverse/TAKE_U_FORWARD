class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int> arr3;
        unordered_map<int,int> mp;
        int i;
        for(i=0;i<arr1.size();i++)
        {
            mp[arr1[i]]=i;
        }
        for(i=0;i<arr2.size();i++)
        {
            if(mp.find(arr2[i])!=mp.end())
            {
                arr3.push_back(arr2[i]);
            }
        }
        int n=arr3.size();
        int j=1;
        i=0;
        while(j<n)
        {
            if(arr3[i]==arr3[j])
            {
                arr3.erase(arr3.begin()+j);
                n--;
            }
            else
            {
                i++;
                j++;
            }
        }
        return arr3;
    }
};
