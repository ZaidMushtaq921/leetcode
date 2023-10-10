class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int j=nums.size()-1;
            int i=0;
         if(nums.size()==1)
            return nums[0];
        
         if(j==nums.size()-1&&nums[j-1]!=nums[j])
            {
                return nums[j];
            }
        
            if(i==0&&nums[i+1]!=nums[i])
            {
                return nums[i];
            }  
        i++;
        j--;
        while(i<=j)
        {
            
            if(nums[j-1]!=nums[j]&& nums[j]!=nums[j+1])
                return nums[j];
            else
                j--;
                        if(nums[i-1]!=nums[i]&& nums[i]!=nums[i+1])
                return nums[i];
            else
                i++;
            
        }
        return nums[0];
    }
};