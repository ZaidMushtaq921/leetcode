//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <vector>
#include <algorithm>

class Solution {
public:
    int minDifference(int arr[], int n) {
        int totalSum = 0;
        for (int i = 0; i < n; i++)
            totalSum += arr[i];

        int k = totalSum;
        std::vector<std::vector<bool>> dp(n, std::vector<bool>(k + 1, false));

        for (int i = 0; i < n; i++)
            dp[i][0] = true;

        if (arr[0] <= k)
            dp[0][arr[0]] = true;

        for (int i = 1; i < n; i++) {
            for (int t = 1; t <= k; t++) {
                bool notTake = dp[i - 1][t];
                bool take = false;

                if (arr[i] <= t)
                    take = dp[i - 1][t - arr[i]];

                dp[i][t] = take || notTake;
            }
        }

        int mini = 1e9;
        for (int i = 0; i <= k; i++) {  // Fix: Iterate up to k, not k/2
            if (dp[n - 1][i] == true) {
                mini = std::min(mini, abs((k - i) - i));
            }
        }

        return mini;
    }
};



//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends