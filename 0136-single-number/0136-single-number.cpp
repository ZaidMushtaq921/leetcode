class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
  
        sort(nums.begin(),nums.end());
              int ans;
        for(int i=0;i<nums.size();i=i+2)
        {
           
              if(i==nums.size()-1)
            {
                ans= nums[i];
                  return ans; 
            }
            if(nums[i]!=nums[i+1])
            {
                ans= nums[i];
                  return ans;
            }
        }
        
      return 0;
    }
};