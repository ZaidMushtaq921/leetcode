class Solution
{
    public:
        int minimumTotal(vector<vector < int>> &triangle)
        {
            int m = triangle.size();
            vector<vector < int>> dp(m, vector<int> (m, 0));
            for (int i = m - 1; i >= 0; i--)
            {
                for (int j = i; j >= 0; j--)
                {
                    if (i == m - 1) dp[i][j] = triangle[i][j];
                    else
                    {
                        int down = dp[i + 1][j];
                        int diagonal = dp[i + 1][j + 1];
                        dp[i][j] = min(down, diagonal) + triangle[i][j];
                    }
                }
            }

            return dp[0][0];
        }
};