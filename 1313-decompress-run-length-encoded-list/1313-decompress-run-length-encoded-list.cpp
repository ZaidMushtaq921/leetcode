class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
      for(int i = 0; i < nums.size();i+=2){
           for(int x=0;x<nums[i];x++)
          {
              result.push_back(nums[i+1]);
          }
      }
        
        return result;
        
    }
};