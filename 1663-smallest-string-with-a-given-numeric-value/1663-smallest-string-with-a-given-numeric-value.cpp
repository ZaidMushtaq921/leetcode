#include <string>

class Solution {
public:
    std::string getSmallestString(int n, int k) {
        std::string s(n, 'a');
        int remainingSum = k - n;

        while (remainingSum > 0) {
            int step = std::min(remainingSum, 25);
            s[n - 1] += step;
            remainingSum -= step;
            n--;
        }

        return s;
    }
};
