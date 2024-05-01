class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int max=0;
        for(int n: nums)
        {
            m[n]++;
            if(m[n]> m[max])
            {
                max=n;
            }
            
        }
        return max;
    }
};