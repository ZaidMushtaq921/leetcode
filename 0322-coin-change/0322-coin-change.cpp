#include <vector>
#include <climits>

class Solution
{
public:
    int coinChange(vector<int> &coins, int target)
    {
        int n = coins.size();
        vector<int> dp(target + 1, INT_MAX);
        dp[0] = 0;

        for (int coin : coins)
        {
            for (int t = coin; t <= target; t++)
            {
                if (dp[t - coin] != INT_MAX)
                    dp[t] = min(dp[t], 1 + dp[t - coin]);
            }
        }

        return dp[target] == INT_MAX ? -1 : dp[target];
    }
};
