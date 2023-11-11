class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      
      sort(nums.begin(),nums.end());
        int maxi = *nums.rbegin();
        int ksum= ((k-1)*k)/2;
        int answer= (maxi*k)+ksum;
        return answer;
        
    }
};