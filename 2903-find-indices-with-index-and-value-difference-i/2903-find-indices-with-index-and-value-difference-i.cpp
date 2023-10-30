class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
           int n= nums.size();
         vector<int> ans;
        for(int i=0;i<n-indexDifference;i++)
        {
            for(int j=i+indexDifference;j<n;j++)
            {
                if(abs(nums[i]- nums[j])>=valueDifference)       
                {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                }
              }  
        }
        
        if(ans.empty())
        {
           ans.push_back(-1);
                ans.push_back(-1);  
        }
        return ans;
    }
    
};