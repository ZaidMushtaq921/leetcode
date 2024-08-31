class Solution {
public:
    string reverseWords(string s) {
        string word;
        string result;

        for(auto it = s.rbegin(); it != s.rend(); ++it) {
            if (*(it) == ' ' && word.empty()) {
                // Skip extra spaces between words
                continue;
            } else if (*(it) == ' ' && !word.empty()) {
                // Reverse the accumulated word and append it to the result
                reverse(word.begin(), word.end());
                if (!result.empty()) {
                    result += " "; // Add space only if result is not empty
                }
                result += word;
                word.clear();
            } else {
                // Accumulate characters for the current word
                word += *it;
            }
        }

        // Add the last word to the result
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!result.empty()) {
                result += " "; // Add space only if result is not empty
            }
            result += word;
        }

        return result;
    }
};
