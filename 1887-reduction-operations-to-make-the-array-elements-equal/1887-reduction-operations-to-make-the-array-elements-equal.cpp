class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       int count=0; 
            sort(nums.begin(),nums.end());
            for(int i=nums.size()-2;i>=0;i--)
            {
                    if(nums[i]!=nums[i+1])
                    {
                            count+=(nums.size()-1-i);
                    }         
            }
            return count;
    }
};