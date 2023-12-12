class Solution
{
    // int f(int ind, int target, vector<int> &coins, vector<vector< int>> &dp)
    // {
    //     if (ind == 0)
    //     {
    //         if (target % coins[ind] == 0) return target / coins[ind];
    //         return 1e9;
    //     }
    //     if (dp[ind][target] != -1) return dp[ind][target];
    //     int nontake = f(ind - 1, target, coins, dp);
    //     int take = INT_MAX;
    //     if (coins[ind] <= target)
    //         take = 1 + f(ind, target - coins[ind], coins, dp);
    //     return dp[ind][target] = min(take, nontake);
    // }

   public:
    int coinChange(vector<int> &coins, int target)
    {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        for (int t = 0; t <= target; t++)
        {
            if (t % coins[0] == 0)
                dp[0][t] = t / coins[0];
            else
                dp[0][t] = 1e9;
        }

        for (int ind = 1; ind < n; ind++)
        {
            for (int tar = 0; tar <= target; tar++)
            {
                int nontake = dp[ind - 1][tar];
                int take = 1e9; // Initialize take with a large value

                if (coins[ind] <= tar)
                    take = 1 + dp[ind][tar - coins[ind]];

                // Check if take is valid (not equal to INT_MAX)
                if (take < 1e9)
                    dp[ind][tar] = min(take, nontake);
                else
                    dp[ind][tar] = nontake;
            }
        }

        if (dp[n - 1][target] >= 1e9)
            return -1;
        return dp[n - 1][target];
    }
};
