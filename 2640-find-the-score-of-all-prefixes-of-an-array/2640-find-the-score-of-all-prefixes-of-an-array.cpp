class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> result;
            long long prefix=0;
            int maxi=INT_MIN;
            for(int i=0;i<nums.size();i++)
            {
                    maxi=max(maxi,nums[i]);
                    prefix+=nums[i] + maxi;
                    result.push_back(prefix);  
            }
            return result;
    }
};