class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int>col(m,0);
        vector<int>row(n,0);
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    col[j]=1;
                    row[i]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(col[j]==1||row[i]==1)
                {
                    mat[i][j]=0;
                }
            }
        }
    }
};
