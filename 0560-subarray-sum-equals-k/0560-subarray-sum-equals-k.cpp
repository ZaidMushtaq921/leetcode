#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;

        // Map to store the cumulative sum and its frequency
        std::unordered_map<int, int> sumMap;
        sumMap[0] = 1; // Handle the case where the sum becomes equal to k

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];

            // Check if (sum - k) has occurred before, and add its frequency to the count
            if (sumMap.find(sum - k) != sumMap.end()) {
                count += sumMap[sum - k];
            }

            // Update the frequency of the current sum
            sumMap[sum]++;
        }

        return count;
    }
};
