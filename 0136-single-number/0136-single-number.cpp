class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
  
        sort(nums.begin(),nums.end());
              int ans=nums[nums.size()-1];
        for(int i=0;i+1<nums.size();i=i+2)
        {
           
            if(nums[i]!=nums[i+1])
            {
                ans= nums[i];
                break;
            }
        }
        
        return ans;
    }
};