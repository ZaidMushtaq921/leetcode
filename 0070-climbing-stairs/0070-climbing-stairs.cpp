class Solution
{
    private:
        int climbstairs(int n, vector<int> &dp)
        {
            if (n == 0)
                return 1;
            if (n == 1)
                return 1;
            int onestep;
            if (dp[n - 1] == -1)
                onestep = climbstairs(n - 1,dp);
            else
                onestep = dp[n - 1];
                
            int twostep;
                
            if (dp[n - 2] == -1)
                twostep = climbstairs(n - 2,dp);
            else
                twostep = dp[n - 2];
                
                return dp[n]=onestep+twostep;
        }
    public:
        int climbStairs(int n)
        {

            vector<int> dp(n+1, -1);
                return climbstairs(n,dp);
        }
};