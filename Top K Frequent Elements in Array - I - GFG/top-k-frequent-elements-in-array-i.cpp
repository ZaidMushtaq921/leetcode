//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if (a.second > b.second) {
            return a.second > b.second;
        }
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return false;
    }
};

class Solution {
public:
    vector<int> topK(vector<int>& nums, int k) {
        map<int, int> m;
        for (auto it : nums) {
            m[it]++;
        }

        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), Compare());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends