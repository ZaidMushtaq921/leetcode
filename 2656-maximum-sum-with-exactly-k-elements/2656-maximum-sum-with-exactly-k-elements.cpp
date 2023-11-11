class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      
     int maxi=*max_element(nums.begin(),nums.end());
        int ksum= ((k-1)*k)/2;
        int answer= (maxi*k)+ksum;
        return answer;
        
    }
};