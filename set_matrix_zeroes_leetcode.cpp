class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        vector<int>col(n,0);
        vector<int>row(m,0);
        for(i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(col[j]==1||row[i]==1)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
