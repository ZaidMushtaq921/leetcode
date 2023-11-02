class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> ans;
        set<vector<int>> s;
        int x=0;
      int n = nums.size();
        sort(nums.begin(),nums.end());
      for(int i = 0; i<n; i++)
      {
          int start=i+1;
          int end=n-1;
          while (start<end)
          {
              if(nums[i]+nums[start]+nums[end]==0)
              {
                  s.insert({nums[i],nums[start],nums[end]});
                 start++;
                  end--;
              }
              else if(nums[i]+nums[start]+nums[end]>0)
              {
                  end--;
              }
              else
              {
                  start++;
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