class Solution {
  private:
      int findsum(vector<int> nums)
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        else
        {
        vector<int> x;
            for(int i=1;i<nums.size();i++)
            {
                x.push_back((nums[i]+nums[i-1])%10);
            }
            return findsum(x); 
        }
    }
public:
    int triangularSum(vector<int>& nums) {
        
        return findsum(nums);
    }
};