class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> ans;
        int s=0;
        int mid=(nums.size()/2);
        while(mid<nums.size())
        {
            ans.push_back(nums[s++]);
            ans.push_back(nums[mid++]);
        }
        return ans;
    }
};