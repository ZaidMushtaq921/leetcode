class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int max=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                count++;
            }
            else
            {
                if(count>max)
                {
                    max=count;
                }
                count=1;
            }
        }
         if(count>max)
                {
                    max=count;
                }
        
        return max;
    }
};