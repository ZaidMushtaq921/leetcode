class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int rollsSize = rolls.size();
        int rollsSum = accumulate(rolls.begin(),rolls.end(),0);
        int Msum = mean*(rollsSize+n) - rollsSum;
        if(Msum < n || Msum> 6*n)
            return {};
        vector<int> result(n,1);
        Msum-=n;
      for(int i =0;i<n || Msum>0;i++)
      {
          int max_add = min(Msum,5);
          result[i]+=max_add;
          Msum-=max_add;
      }
       return result;
    }
};