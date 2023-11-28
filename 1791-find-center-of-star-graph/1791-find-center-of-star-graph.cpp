#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> m;

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            m[u]++;
            m[v]++;
        }

        int ans = -1;
        for (auto it : m) {
            if (it.second == edges.size()) {
                ans = it.first;
                break;
            }
        }

        return ans;
    }
};
