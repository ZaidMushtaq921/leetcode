class Solution
{
    int f(int ind, int target, vector<int> &coins, vector<vector< int>> &dp)
    {
        if (ind == 0)
        {
            if (target % coins[ind] == 0) return target / coins[ind];
            return 1e9;
        }
        if (dp[ind][target] != -1) return dp[ind][target];
        int nontake = f(ind - 1, target, coins, dp);
        int take = INT_MAX;
        if (coins[ind] <= target)
            take = 1 + f(ind, target - coins[ind], coins, dp);
        return dp[ind][target] = min(take, nontake);
    }

    public:
        int coinChange(vector<int> &coins, int amount)
        {
            int s = coins.size();
            vector<vector < int>> dp(s, vector<int> (amount + 1, -1));

            int ans = f(s - 1, amount, coins, dp);
            if (ans >= 1e9)
                return -1;
            return ans;
        }
};