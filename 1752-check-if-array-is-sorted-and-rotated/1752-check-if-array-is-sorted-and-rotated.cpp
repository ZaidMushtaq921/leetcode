class Solution {
public:
    bool check(vector<int>& nums) {
        int rotate=0;
      for(int i=1;i<nums.size();i++)
      {
          if(nums[i-1]>nums[i])
           rotate++;          
      }
        if(nums[nums.size()-1]>nums[0])
            rotate++;
        if(rotate==0||rotate==1)
            return true;
        return false;
    }
};