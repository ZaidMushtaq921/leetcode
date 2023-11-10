class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
       int count=0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(target==(nums[i]+nums[j]))
                {
                    count++;
                }
                if(target==(nums[j]+nums[i]))
                {
                    count++;
                }
            }
        }
        return count;
    }
};