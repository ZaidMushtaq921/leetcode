#include <vector>
#include <stack>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        stack<int> nextgreater;
        
        for (int i = temperatures.size() - 1; i >= 0; --i) {
            while (!nextgreater.empty() && temperatures[i] >= temperatures[nextgreater.top()]) {
                nextgreater.pop();
            }
            if (nextgreater.empty()) {
                result[i] = 0;
            } else {
                result[i] = nextgreater.top() - i;
            }
            nextgreater.push(i);
        }
        
        return result;
    }
};