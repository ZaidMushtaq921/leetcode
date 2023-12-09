class Solution
{

    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {

            int m = matrix.size();
            vector<vector < int>> dp(m, vector<int> (m, 0));
            for (int i = 0; i < m; i++)
            {
                dp[0][i] = matrix[0][i];
            }
            for (int i = 1; i < m; i++)
            {

                for (int j = 0; j < m; j++)
                {
                    int up = INT_MAX;
                    int left = INT_MAX;
                    int right = INT_MAX;
                    up = matrix[i][j] + dp[i - 1][j];
                    if (j - 1 >= 0) left = matrix[i][j] + dp[i - 1][j - 1];
                    if (j + 1 < m) right = matrix[i][j] + dp[i - 1][j + 1];

                    dp[i][j] = min(up, min(right, left));
                }
            }
                
            int mini = dp[m - 1][0];
            for (int i = 1; i < m; i++)
            {
                mini = min(dp[m - 1][i], mini);
            }
            return mini;
        }
};