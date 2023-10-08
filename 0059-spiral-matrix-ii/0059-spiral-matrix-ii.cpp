class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int fr=0;
        int lr=n-1;
        int fc=0;
        int lc=n-1;
        int total=n*n;
        int count=1;
        while(count<=total)
        {
            for(int i=fc;i<=lc&&count<=total;i++)
            {
                ans[fr][i]=count++;
            }
            fr++;
            for(int i=fr;i<=lr&&count<=total;i++)
            {
                ans[i][lc]=count++;
            }
            lc--;
            for(int i=lc;i>=fc&&count<=total;i--)
            {
                ans[lr][i]=count++;
            }
            lr--;
            for(int i=lr;i>=fr&&count<=total;i--)
            {
                ans[i][fc]=count++;
            }
            fc++;
        }
        return ans;
        
        
        
    }
};