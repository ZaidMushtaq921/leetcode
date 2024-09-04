class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // Two hash maps to store the character mappings between s and t
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); i++) {
            char s_char = s[i];
            char t_char = t[i];

            // Check if there is a conflicting mapping in s -> t
            if (s_to_t.count(s_char)) {
                if (s_to_t[s_char] != t_char) return false;
            } else {
                s_to_t[s_char] = t_char;
            }

            // Check if there is a conflicting mapping in t -> s
            if (t_to_s.count(t_char)) {
                if (t_to_s[t_char] != s_char) return false;
            } else {
                t_to_s[t_char] = s_char;
            }
        }

        return true;  // If no conflicts were found, the strings are isomorphic
    }
};
