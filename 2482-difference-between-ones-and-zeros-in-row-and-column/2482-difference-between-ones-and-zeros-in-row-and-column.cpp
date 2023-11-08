class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<pair<int,int>> rowpair;
        vector<pair<int,int>> colpair;
         vector<vector<int>> result;
        for(int i=0;i<grid.size();i++)
        {
            int zerocount=0;
            int onecount=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                   zerocount++; 
                }
                else
                {
                    onecount++;
                }
            }
            rowpair.push_back(make_pair(zerocount,onecount));
        }
          for(int i=0;i<grid[0].size();i++)
        {
            int zerocount=0;
            int onecount=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)
                {
                   zerocount++; 
                }
                else
                {
                    onecount++;
                }
            }
            colpair.push_back(make_pair(zerocount,onecount));
        }

          for(int i=0;i<rowpair.size();i++)
        {
            vector<int> x;
            for(int j=0;j<colpair.size();j++)
            {
                int diff = rowpair[i].second +colpair[j].second - rowpair[i].first                     -colpair[j].first;
                
                x.push_back(diff);
            }
            result.push_back(x);
        }
        return result;
    }
};