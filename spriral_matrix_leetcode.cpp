class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        int i;
        vector<int>arr;
        while(top<=bottom && left<=right)
        {
            for(i=left;i<=right;i++)
                arr.push_back(matrix[top][i]);
            top++;
            for(i=top;i<=bottom;i++)
                arr.push_back(matrix[i][right]);
            right--;
            if(top<=bottom)
            {
                for(i=right;i>=left;i--)
                    arr.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(left<=right)
            {
                for(i=bottom;i>=top;i--)
                    arr.push_back(matrix[i][left]);
                left++;
            }
        }
        return arr;
    }
};
