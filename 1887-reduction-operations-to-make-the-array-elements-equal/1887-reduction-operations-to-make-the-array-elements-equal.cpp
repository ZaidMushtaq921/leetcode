class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       int count=0; 
            int n=nums.size();
            sort(nums.begin(),nums.end());
            for(int i=n-2;i>=0;i--)
            {
                    if(nums[i]!=nums[i+1])
                    {
                            count=count+(n-1-i);
                    }         
            }
            return count;
    }
};