class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
       int count=1;
        sort(nums.begin(),nums.end());
        int start=nums[0];
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]-start>k)
            {
                count++;
                start=nums[j];
            }
        }
        return count;
        
        
        
    }
};