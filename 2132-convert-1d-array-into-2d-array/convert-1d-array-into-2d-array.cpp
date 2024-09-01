class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Check if the total elements match the required dimensions
        if (n * m != original.size()) return {};
        
        // Create the result vector and preallocate space
        vector<vector<int>> result(m, vector<int>(n));
        
        // Fill the 2D array directly
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[i][j] = original[i * n + j];
            }
        }
        
        return result;
    }
};
