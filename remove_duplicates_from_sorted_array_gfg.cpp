class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> arr1;
        int i=0;
        int count=0;
        while(i<arr.size())
        {
            if(arr[i]!=arr[i+1])
            {
                arr1.push_back(arr[i]);
                i++;
            }
            else
            {
                i++;
                count++;
            }
        }
        if(count==arr.size())
            arr1.push_back(arr[0]);
        return arr1;
    }
};
