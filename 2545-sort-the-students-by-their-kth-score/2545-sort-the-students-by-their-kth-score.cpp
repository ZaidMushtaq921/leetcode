#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool compareRows(vector<int>& row1, vector<int>& row2, int k) {
        return row1[k] > row2[k];
    }

    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
            
            
        sort(score.begin(), score.end(), [this, k](vector<int>& row1, vector<int>& row2) {
            // Call the member function for comparison
            return compareRows(row1, row2, k);
        });

        return score;
    }
};
