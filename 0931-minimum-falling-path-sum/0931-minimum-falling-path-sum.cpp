class Solution
{

    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {

            int m = matrix.size();
            vector<int> prev(m, 0);
            for (int i = 0; i < m; i++)
            {
                prev[i] = matrix[0][i];
            }
            for (int i = 1; i < m; i++)
            {
                vector<int> curr(m, 0);
                for (int j = 0; j < m; j++)
                {
                    int up = INT_MAX;
                    int left = INT_MAX;
                    int right = INT_MAX;
                    up = matrix[i][j] + prev[j];
                    if (j - 1 >= 0) left = matrix[i][j] + prev[j - 1];
                    if (j + 1 < m) right = matrix[i][j] + prev[j + 1];

                    curr[j] = min(up, min(right, left));
                }
                prev = curr;
            }

            int mini = prev[0];
            for (int i = 1; i < m; i++)
            {
                mini = min(prev[i], mini);
            }
            return mini;
        }
};