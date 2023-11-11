class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int maxi=nums[0];
        int operations=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
            }
                else
                {
                   operations+= maxi-nums[i]+1;
                    maxi=maxi+1;
                }
        }
        
        return operations;
    }
};