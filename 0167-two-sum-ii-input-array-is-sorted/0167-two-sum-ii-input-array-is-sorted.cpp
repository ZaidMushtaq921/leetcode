class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int s = 0;
        int l = numbers.size() - 1;
        
        while (s <= l) {
            int sum = numbers[s] + numbers[l];
            if (sum == target) {
                ans.push_back(s + 1); // Adjust for 1-based indexing
                ans.push_back(l + 1); // Adjust for 1-based indexing
                break;
            } else if (sum < target) {
                s++;
            } else {
                l--;
            }
        }
        
        return ans;
    }
};
