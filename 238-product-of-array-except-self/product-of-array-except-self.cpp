class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int product = 1;
        for (int i = 0; i < n; i++) {
            result[i] = product;
            product *= nums[i];
        }
        product = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= product;
            product *= nums[i];
        }

        return result;
    }
};
