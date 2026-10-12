class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int i,j;
        int n=mat.size();
        for(i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};
