class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos;
        vector<int> neg;
       vector<int> result;
        
        for(auto it: nums)
        {
            if(it>=0)
            {
                pos.push_back(it);
            }
            else
            {
                neg.push_back(it);
            }
        }
        
        for(int i=0;i<pos.size();i++)
        {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};