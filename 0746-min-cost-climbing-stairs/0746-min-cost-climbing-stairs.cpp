class Solution {
        int m(int n, vector<int>&cost, vector<int> &dp)
        {
                if(n==0 || n==1)
                        return cost[n];
                if(n<0)
                        return 0;
                if(dp[n]!=-1)
                        return dp[n];
                
               return dp[n]=cost[n]+min(m(n-1,cost,dp),m(n-2,cost,dp)); 
                
                
        }
public:
    int minCostClimbingStairs(vector<int>& cost) {
            int n=cost.size();
          vector<int> dp(n,-1);
            return min(m(n-1,cost,dp),m(n-2,cost,dp));
    }
};