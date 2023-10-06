class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums;
        if(n==2&&nums[0]!=nums[1])
            return nums;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }
            if(nums[i]!=nums[i-1]&&count>n/3)
            {
                ans.push_back(nums[i-1]);
                count=1;
            }
            else if(nums[i]!=nums[i-1]&&count<=n/3)
            count=1;
        }
        if(count>n/3)
              ans.push_back(nums[n-1]);
        return ans;
    }
};