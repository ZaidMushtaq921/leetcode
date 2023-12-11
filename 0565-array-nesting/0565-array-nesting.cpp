class Solution {
    int dfs(int ind, vector<int>& nums, vector<bool>& visited, int n) {
        if (visited[ind]) return 0;
        visited[ind] = true;
        return 1 + dfs(nums[ind], nums, visited, n);
    }

public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n, false);
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                maxi = max(maxi, dfs(i, nums, visited, n));
            }
        }

        return maxi;
    }
};
