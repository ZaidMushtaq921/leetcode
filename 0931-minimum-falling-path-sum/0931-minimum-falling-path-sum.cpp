class Solution
{
    private:
        int f(int i, int j, vector<vector < int>> &matrix, int m,vector<vector < int>> &dp)
        {
            if (j < 0 || j >= m) return INT_MAX;
            if (i == 0) return matrix[i][j];   
              if(dp[i][j]!=-1) return dp[i][j];  
            int up = f(i - 1, j, matrix, m,dp);

            int left = f(i - 1, j - 1, matrix, m,dp);

            int right = f(i - 1, j + 1, matrix, m,dp);

            return dp[i][j]=(min(up, min(right, left)) + matrix[i][j]);
        }

    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {
                
                int m = matrix.size();
                vector<vector < int>> dp(m,vector<int>(m,0));
                for(int i=0;i<m;i++)
                {
                        dp[0][i]=matrix[0][i];
                }
               for(int i=1;i<m;i++)
               {
                       
                       for(int j=0;j<m;j++)
                       {
                               int up=INT_MAX;
                               int left=INT_MAX;
                               int right=INT_MAX;
                                up= matrix[i][j]+dp[i-1][j];
                               if(j-1>=0) left=matrix[i][j]+dp[i-1][j-1];
                               if(j+1<m)right=matrix[i][j]+dp[i-1][j+1];
                               
                               dp[i][j]=min(up,min(right,left));
                       }     
               }
                int mini=dp[m-1][0];
                 for(int i=1;i<m;i++)
                {
                    mini=min(dp[m-1][i],mini) ;   
                } 
                return mini;
        }
};