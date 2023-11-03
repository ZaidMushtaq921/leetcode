class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
          for(int i=0;i<k && i<nums.size();i++)
          {
              m[nums[i]]++;
              if( m[nums[i]]>1)
                  return true;
          }
        for(int i=0,j=k;j<nums.size();i++,j++)
        {
            m[nums[j]]++;
              if( m[nums[j]]>1)
                  return true;
             m[nums[i]]--;
            
        }
        return false;
    }
};