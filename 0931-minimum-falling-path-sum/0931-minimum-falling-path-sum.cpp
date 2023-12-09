class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<int> prev(m, 0);

        for (int i = 0; i < m; i++) {
            prev[i] = matrix[0][i];
        }

        for (int i = 1; i < m; i++) {
            vector<int> curr(m, INT_MAX);
            for (int j = 0; j < m; j++) {
                curr[j] = matrix[i][j] + prev[j];
                if (j - 1 >= 0) curr[j] = min(curr[j], matrix[i][j] + prev[j - 1]);
                if (j + 1 < m) curr[j] = min(curr[j], matrix[i][j] + prev[j + 1]);
            }
            prev = curr;
        }

        return *min_element(prev.begin(), prev.end());
    }
};
