//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    int mod= 1e9+7;
    int f(int ind,int sum,vector<int>& arr,vector<vector<int>>& dp )
    {
        if(ind==0)
    {
        if(sum==0 && arr[0]==0) return 2;
        if(sum==0 || sum==arr[0]) return 1;
        return 0;
    }    
      if(dp[ind][sum]!=-1) return dp[ind][sum];
      int nottake= f(ind-1,sum,arr,dp);
      int take=0;
      if(arr[ind]<=sum) take=f(ind-1,sum-arr[ind],arr,dp);
      return dp[ind][sum]= (take + nottake) % mod;
    }
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
      int s=0;
      for(int i=0;i<n;i++) s+=arr[i];
        if(s-d<0 || (s-d)%2) return 0;
        vector<vector<int>> dp(n,vector<int> ((s-d)/2+1,-1));
       return f(n-1,(s-d)/2,arr,dp);
       
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends