class Solution {
public:
     int dominantIndex(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int pos = -1; // Initialize pos to -1 in case nums is empty

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= max1) {
                max2 = max1;
                max1 = nums[i];
                pos = i;
            } else if(nums[i] > max2) {
                max2 = nums[i];
            }
        }

        if(max2 * 2 <= max1) // Corrected condition
            return pos;
        return -1;
    }
};

