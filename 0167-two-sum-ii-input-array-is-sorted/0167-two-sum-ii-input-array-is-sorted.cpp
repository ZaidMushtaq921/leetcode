class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int l = numbers.size() - 1;
        while (s <= l) {
          int sum = numbers[s] + numbers[l];
            if (sum == target) {
            return {s+1,l+1};
                }
            else if (sum < target) {
                s++;
            } else {
                l--;
            }
        }
        
        return {};
    }
};
