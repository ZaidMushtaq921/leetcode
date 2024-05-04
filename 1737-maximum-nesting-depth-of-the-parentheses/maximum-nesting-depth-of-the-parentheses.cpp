class Solution {
public:
      int maxDepth(string s) {
        int maxDepth = 0;
        int counter = 0;
        
        for (char c : s) {
            if (c == '(') {
                counter++;
                maxDepth = max(maxDepth, counter);
            } else if (c == ')') {
                counter--;
            }
        }
        
        return maxDepth;
    }
};