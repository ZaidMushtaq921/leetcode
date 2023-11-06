class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto it : nums) {
            m[it]++;
        }
        int maxFrequency = 0;
        for (auto it : m) {
            maxFrequency = max(maxFrequency, it.second);
        }
        vector<vector<int>> result(maxFrequency);
        
        for (auto it : m) {
            for (int i = 0; i < it.second; i++) {
                result[i].push_back(it.first);
            }
        }
        
        return result;
    }
};
