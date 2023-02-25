class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();//number of rows 
        int c=matrix[0].size();//number of columns
        vector<int>row(r,1);
        vector<int>col(c,1);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
         for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(row[i]==0 || col[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        } 
    }
};
