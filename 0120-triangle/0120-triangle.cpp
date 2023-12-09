class Solution
{
    private:
        int f(int i, int j, vector<vector < int>> &triangle, int m, vector< vector< int>> &dp)
        {
            if (i == m - 1) return triangle[m - 1][j];

              if(dp[i][j]!=-1)return dp[i][j];  
            int down = f(i + 1, j, triangle, m,dp);
            int diagonal = f(i + 1, j + 1, triangle, m,dp);
            return  dp[i][j]= min(down, diagonal) + triangle[i][j];
        }

    public:
        int minimumTotal(vector<vector < int>> &triangle)
        {
            int m = triangle.size();
            vector<vector < int>> dp(m, vector<int> (m, -1));
            return f(0, 0, triangle, m, dp);
        }
};