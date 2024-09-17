class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> s1_hash;
        vector<string> result;
        string word;

        // Process the first sentence
        istringstream my_stream1(s1);
        while (my_stream1 >> word) {
            s1_hash[word]++;
        }

        // Process the second sentence
        istringstream my_stream2(s2);
        while (my_stream2 >> word) {
            s1_hash[word]++;
        }

        // Find uncommon words (those that appeared exactly once)
        for (auto &entry : s1_hash) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};