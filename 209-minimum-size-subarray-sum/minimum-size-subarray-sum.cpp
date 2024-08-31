#include <vector>
#include <climits> // For INT_MAX

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int sum = 0;
        int minlen = INT_MAX;
        int low = 0;
        int high = 0;
        
        while (high < nums.size()) {
            // Expand the window
            sum += nums[high++];
            
            // Contract the window until the sum is less than target
            while (sum >= target) {
                minlen = std::min(minlen, high - low);
                sum -= nums[low++];
            }
        }
        
        return minlen == INT_MAX ? 0 : minlen; // Return 0 if no valid subarray is found
    }
};
