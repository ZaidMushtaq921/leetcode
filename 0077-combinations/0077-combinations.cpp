#include <vector>

class Solution {
    void solve(int start, int end, int comb, std::vector<int>& ans, std::vector<std::vector<int>>& result, std::vector<bool>& visited) {
        if (comb == 0) {
            result.push_back(ans);
            return;
        }

        for (int i = start; i <= end; i++) {
            if (!visited[i]) {
                visited[i] = true;
                ans.push_back(i);
                solve(i + 1, end, comb - 1, ans, result, visited);
                ans.pop_back();
                visited[i] = false;
            }
        }
    }

public:
    std::vector<std::vector<int>> combine(int n, int k) {
        std::vector<std::vector<int>> result;
        std::vector<int> ans;
        std::vector<bool> visited(n + 1, false);  // Fix the vector initialization

        solve(1, n, k, ans, result, visited);
        return result;
    }
};
