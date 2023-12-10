class Solution
{
    int f(int i, int j1, int j2, vector<vector < int>> &grid, vector< vector< vector< int>>> &dp,int r,int c)
    {
        if (j1 < 0 || j1 >= c || j2 < 0 || j2 >= c) return -1e8;
        if (i == r-1)
        {
            if (j1 == j2) return grid[i][j1];
            else
                return grid[i][j1] + grid[i][j2];
        }
if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi = 0;
        for (int x = -1; x <= 1; x++)
        {
            int value = 0;
            for (int y = -1; y <= 1; y++)
            {
                if (j1 == j2) value = grid[i][j1];
                else
                    value = grid[i][j1] + grid[i][j2];

                value += f(i+1,j1+x,j2+y,grid,dp,r,c);
                maxi = max(value, maxi);
            }
                
        }
            return dp[i][j1][j2]=maxi;
    }

    public:
        int cherryPickup(vector<vector < int>> &grid)
        {
            int r = grid.size();
            int c = grid[0].size();
            vector<vector<vector< int>>> dp(r, vector<vector < int>> (c, vector<int> (c, -1)));
                return f(0,0,c-1,grid,dp,r,c);
        }
};