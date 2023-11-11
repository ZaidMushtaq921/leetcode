class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum=0;
        sort(piles.begin(),piles.end());
        int i=0;
        int j= piles.size()-2;
        while(i<j)
        {
            sum+=piles[j];
            i++;
            j-=2;
        }
        
       return sum; 
        
    }
};