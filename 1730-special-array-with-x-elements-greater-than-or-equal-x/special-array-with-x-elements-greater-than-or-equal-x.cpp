class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int result = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=i+1) result = i+1;
            else if (nums[i]<i+1 && nums[i]>=i) return -1;
            
        }
        return result!=-0?result:-1 ;
    }
};