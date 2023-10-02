class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int mid;
        int l=nums.size()-1;
         
        while(s<l){
            if(s==l-1)
            {
                if(nums[s]<nums[l])
                    return nums[s];
             else
                 return nums[l];
            }
             mid=(s+l)/2;            
            if(nums[s]>nums[l]&&nums[s]<nums[mid])
            {
                s=mid;
            }
            else
                l=mid;
        }
        return nums[mid];
    }
};