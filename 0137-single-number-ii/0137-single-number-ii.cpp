class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==nums.size()-1)
            {
                ans=nums[i];
                break;
            }
            if(nums[i]==nums[i+1])
            {
                count++;
            }
            else
            {
                if(count!=3)
                {
                    ans= nums[i];
                    break;
                }
                else
                {
                    count=1;
                }
            }
        }
        return ans;
    }
};