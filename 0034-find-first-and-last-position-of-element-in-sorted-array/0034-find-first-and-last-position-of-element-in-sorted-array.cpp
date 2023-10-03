class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1); 
        int f=0;
        int l=nums.size()-1;
        while(f<=l)
        {
            if(ans[0]!=-1&&ans[1]!=-1)
                break;
            if(nums[f]==target)
                ans[0]=f;
            else
                f++;
            if(nums[l]==target)
                ans[1]=l;
            else
                l--;
        }
        return ans;
    }
};