class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int i = 0;
        while (i < intervals.size()) {
            int first = intervals[i][0];
            int chk = intervals[i][1];
            i++;
            while (i < intervals.size() && intervals[i][0] <= chk) {
                chk = max(chk, intervals[i][1]);
                i++;
            }
            int second = chk;
            vector<int> c = {first, second};
            result.push_back(c);
        }
        return result;
    }
};