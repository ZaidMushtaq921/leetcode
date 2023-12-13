#include <vector>

class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> rowsum(r, 0);
        vector<int> colsum(c, 0);

        // Calculate row and column sums simultaneously
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                rowsum[i] += mat[i][j];
                colsum[j] += mat[i][j];
            }
        }

        int count = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1 && rowsum[i] == 1 && colsum[j] == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
