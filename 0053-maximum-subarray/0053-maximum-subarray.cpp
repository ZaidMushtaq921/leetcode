class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int max_sum = INT_MIN;
        int current_sum = 0;
        bool all_negative = true;
        int max_negative = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            
            // Check if the current element is negative and update max_negative
            if (nums[i] < 0 && nums[i] > max_negative) {
                max_negative = nums[i];
            }

            // If the current sum becomes negative, reset it to 0
            if (current_sum < 0) {
                current_sum = 0;
            } else {
                all_negative = false;
            }

            // Update the maximum sum
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }

        // If all elements are negative, return the largest negative number
        if (all_negative) {
            return max_negative;
        }

        return max_sum;
    }
};