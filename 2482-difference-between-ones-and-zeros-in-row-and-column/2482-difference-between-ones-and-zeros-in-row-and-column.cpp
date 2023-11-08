class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> diff(n, vector<int>(m, 0));
        
        vector<int> rowDiff(n, 0);
        vector<int> colDiff(m, 0);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    rowDiff[i]++;
                    colDiff[j]++;
                }
                else {
                    rowDiff[i]--;
                    colDiff[j]--;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                diff[i][j] = rowDiff[i] + colDiff[j];
            }
        }
        
        return diff;
    }
};