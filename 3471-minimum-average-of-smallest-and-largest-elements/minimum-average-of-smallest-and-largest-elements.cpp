class Solution {
public:
    double minimumAverage(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double result = DBL_MAX;
        int i = 0;
        int j = nums.size() - 1; 
        while (i < j) {
            double m = (nums[i] + nums[j]) / 2.0;
            result = min(result, m);
            i++;
            j--;
        }
        
        return result;
    }
};
