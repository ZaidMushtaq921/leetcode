

class Solution {
public:
    int partitionString(string s) {
        int n = s.length();
        unordered_set<char> uniqueChars;  // To keep track of unique characters
        int count = 0;  // Count of substrings

        for (int i = 0; i < n; ++i) {
            if (uniqueChars.find(s[i]) == uniqueChars.end()) {
                // Current character is unique, start a new substring
                uniqueChars.insert(s[i]);
            } else {
                // Current character is not unique, end the current substring
                count++;
                uniqueChars.clear();  // Clear the set for the next substring
                uniqueChars.insert(s[i]);  // Start a new substring with the current character
            }
        }

        // If there are any remaining unique characters, count them as a separate substring
        if (!uniqueChars.empty()) {
            count++;
        }

        return count;
    }
};
