class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        
        for (int i = 0; i < words.size(); ++i) {
            bool found = false;
            for (char c : words[i]) {
                if (c == x) {
                    found = true;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
