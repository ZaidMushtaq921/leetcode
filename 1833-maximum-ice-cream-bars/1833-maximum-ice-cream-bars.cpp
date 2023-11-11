class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0;
        sort(costs.begin(),costs.end());
        for(auto i:costs)
        {
            if(coins>=i)
            {
                count++;
                coins-=i;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};