class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      
        
        
           vector<vector<int>> ans;
        set<vector<int>> s;
      int n = nums.size();
        sort(nums.begin(),nums.end());
      for(int i = 0; i<n-2; i++)
      {
          for(int j=i+1; j<n-1;j++)
          {
              
         int start=j+1;
          int end=n-1;
          while (start<end)
          {
              long long sum =0;
                 sum += nums[i]+nums[j];
                  sum+= nums[start]+nums[end];
              if(  sum==target)
              {
                  s.insert({nums[i],nums[j],nums[start],nums[end]});
                 start++;
                  end--;
              }
              else if(sum>target)
              {
                  end--;
              }
              else
              {
                  start++;
              }
          }
           
          }
         
      }
        for(auto triples:s)
        {
            ans.push_back(triples);
        }
        
        
        return ans;  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};