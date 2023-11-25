class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
            int total_sum= 0;
            vector<int> result;
        for(auto it: nums)
        {
                total_sum+=it;
        }
            
          int prefix_sum=0; 
            int suffix_sum=total_sum;
            int size=nums.size();
         for( int i=0;i<size;i++)
         {
                int val= abs(prefix_sum-(nums[i]*i)) + abs(suffix_sum-(nums[i]*(size-i)));
                 
                 result.push_back(val);
                 suffix_sum-=nums[i];
               prefix_sum+=nums[i];  
                 
         }
            return result;
            
    }
};