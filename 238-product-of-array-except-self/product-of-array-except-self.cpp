#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Calculate products of elements to the left of each element
        int product = 1;
        for (int i = 0; i < n; i++) {
            result[i] = product;
            product *= nums[i];
        }

        // Calculate products of elements to the right of each element and multiply it with the corresponding product from the first pass
        product = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= product;
            product *= nums[i];
        }

        return result;
    }
};
