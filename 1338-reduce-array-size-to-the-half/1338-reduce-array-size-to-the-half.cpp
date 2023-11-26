class compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second 
                <b.second;
    }
};
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (auto it : arr) {
            mp[it]++;
        }

        int size = arr.size();
        int count = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

        for (auto it : mp) {
            pq.push(it);
        }

        int reduce = 0;
        while (reduce < size / 2 && !pq.empty()) {
            reduce += pq.top().second;
            pq.pop();
            count++;
        }
        return count;
    }
};