class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        sort(nums.begin(),nums.end());
        int check=1;
        for(int i=0;i<nums.size();i++)
        {
            if(check<nums[i])
            {
                break;
            }
            if(check==nums[i])
            {
                check++;
            }
            
        }
        return check;
    }
};