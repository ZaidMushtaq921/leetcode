class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Initialize a vector to count the occurrences of each character in magazine
        vector<int> magazine_hash(26, 0);  // 26 letters in the alphabet

        // Count the characters in the magazine
        for (auto c : magazine) {
            int pos = c - 'a';
            magazine_hash[pos]++;
        }

        // Check if ransomNote can be constructed
        for (auto c : ransomNote) {
            int pos = c - 'a';
            if (magazine_hash[pos] > 0) {
                magazine_hash[pos]--;
            } else {
                return false;  // Not enough characters in magazine
            }
        }

        return true;  // Successfully constructed ransomNote from magazine
    }
};
