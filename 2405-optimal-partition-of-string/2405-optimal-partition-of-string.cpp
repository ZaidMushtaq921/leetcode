

class Solution {
public:
    int partitionString(string s) {
        int cnt[26] = {}, res = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (cnt[s[i] - 'a']) {
            ++res;
            fill(begin(cnt), end(cnt), 0);
        }
        ++cnt[s[i] - 'a'];
    }
    return res; 
    }
};
