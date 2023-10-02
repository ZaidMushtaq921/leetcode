class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2)
        {
            if(i==nums.size()-1)
            {
                ans= nums[i];
                break; 
            }
            if(nums[i]!=nums[i+1])
            {
                ans= nums[i];
                break;
            }
        }
        
        return ans;
    }
};