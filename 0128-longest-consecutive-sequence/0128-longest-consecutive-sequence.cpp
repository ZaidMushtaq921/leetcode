class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_seq=1;
        int count=1;
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++)
        {
            if(nums[i+1]==nums[i])
            {
                continue;
            }
            if(nums[i+1]==nums[i]+1)
            {
                count++;
            }
            if(max_seq<count)
            {
                max_seq=count;
            }
            if(nums[i+1]!=nums[i]+1)
            {
                count=1;
            }
        }
        return max_seq;
        
    }
};