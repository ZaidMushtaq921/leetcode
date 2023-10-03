class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int f=0;
        int l=nums.size()-1;
        int mid;
        while(f<=l)
        {
            mid=(f+l)/2;
            if(nums[mid]>mid)
            {
                l=mid-1; 
            }
            else
            {
                f=mid+1;
            }
        }
        if(mid==nums[mid])
            return mid+1;
        else
            return mid;
    }
};