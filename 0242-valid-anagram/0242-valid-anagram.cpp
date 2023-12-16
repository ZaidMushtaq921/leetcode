class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> sm(26, 0);
        vector<int> tm(26, 0);

        for (int i = 0; i < s.size(); i++) {
            sm[s[i] - 'a']++;
            tm[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (sm[i] != tm[i])
                return false;
        }

        return true;
    }
};
