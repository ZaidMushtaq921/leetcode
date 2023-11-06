class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=-1;
         vector<bool> result;
        for(auto it: candies)
        {
            maxi=max(it,maxi);
        }
        for(auto it: candies)
        {
            if(it+extraCandies>=maxi)
            {
                result.push_back(true);
            }
            else
            {
                     result.push_back(false);
            }
        }
        return result;
        
    }
};