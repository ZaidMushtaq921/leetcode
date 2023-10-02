class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int f=0;
        int l=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(f<=l)
        {
            int mid=(f+l)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            else if (target > nums[mid])
            {
                f=mid+1;
            }
            else
                l=mid-1;
        }
        return false;
        
    }
};