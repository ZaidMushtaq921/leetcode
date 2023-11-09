class Solution {
private:
    struct Compare {
        bool operator()(pair<char, int> el1,  pair<char, int> el2) {
            return el1.second < el2.second;
        }
    };

public:
    string frequencySort(string s) {
        string result;
        unordered_map<char, int> m;
        priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> pq;

        for (char c : s) {
            m[c]++;
        }

        for (auto entry : m) {
            pq.push(entry);
        }

        while (!pq.empty()) {
            pair<char, int> top = pq.top();
            pq.pop();

            for (int i = 0; i < top.second; i++) {
                result.push_back(top.first);
            }
        }

        return result;
    }
};
