#include <string>

class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        std::string output = "";
        int openCount = 0;
        
        for (char c : s) {
            if (c == '(') {
                if (openCount > 0) {
                    output += c;
                }
                openCount++;
            } else if (c == ')') {
                openCount--;
                if (openCount > 0) {
                    output += c;
                }
            }
        }
        
        return output;
    }
};
