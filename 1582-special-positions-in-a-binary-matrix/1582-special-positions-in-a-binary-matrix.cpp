class Solution
{
    public:
        int numSpecial(vector<vector < int>> &mat)
        {
            int r = mat.size();
            int c = mat[0].size();
            vector<int> rowsum, colsum;
            for (int i = 0; i < r; i++)
            {
                int sum = 0;
                for (int j = 0; j < c; j++)
                {
                    sum += mat[i][j];
                }
                rowsum.push_back(sum);
            }
            for (int i = 0; i < c; i++)
            {
                int sum = 0;
                for (int j = 0; j < r; j++)
                {
                    sum += mat[j][i];
                }
                colsum.push_back(sum);
            }
            int count = 0;
            for (int i = 0; i < r; i++)
            {

                for (int j = 0; j < c; j++) {
                    if(mat[i][j]==1)
                    {
                        if(rowsum[i]==1 && colsum[j]==1)
                        count++;
                    }
                }
            }
            return count;
        }
};