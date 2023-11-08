class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> dis;
        string s;
        int x;
        for(int i=0;i<nums.size();i++)
         {
             s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            x=stoi(s);
            dis.insert(x);
         }
        for(auto it: nums)
        {
            dis.insert(it);
        }
        return dis.size();
    }
};