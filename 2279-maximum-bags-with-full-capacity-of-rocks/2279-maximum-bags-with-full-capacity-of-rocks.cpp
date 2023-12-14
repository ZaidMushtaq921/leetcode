
using namespace std;

class Solution {
public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        return a.first - a.second < b.first - b.second;
    }

    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks) {
        int count = 0;
        vector<pair<int, int>> p;

        for (int i = 0; i < rocks.size(); i++) {
            p.emplace_back(capacity[i], rocks[i]);
        }

        sort(p.begin(), p.end(), comp);

        for (const auto& [c, r] : p) {
            if (c == r) {
                count++;
            } else if (additionalRocks >= c - r) {
                additionalRocks -= c - r;
                count++;
            } else {
                break; // Stop checking once additionalRocks are not enough
            }
        }

        return count;
    }
};
