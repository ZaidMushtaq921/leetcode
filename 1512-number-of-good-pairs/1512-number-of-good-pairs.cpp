class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int> m;
        int sum=0;
        for(auto it: nums)
        {
            m[it]++;
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                int n=it.second-1;
                sum+=(n*(n+1))/2;
            }
        }
        return sum;
    }
};