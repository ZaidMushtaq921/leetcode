class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;  // If the input vector is empty, there are no duplicates.
        }

        int k = 0;  // Index for the unique elements.
        for (int i = 1; i < nums.size(); i++) {
            if (nums[k] != nums[i]) {
                k++;
                nums[k] = nums[i];  // Overwrite the next unique element.
            }
        }
        
        return k + 1;  // The number of unique elements is k+1.
    }
};
