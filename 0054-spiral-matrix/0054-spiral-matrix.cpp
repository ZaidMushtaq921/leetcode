class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;
        int i;
        int count=0;
        int total=row*col;
        while(count<total){
        for( i=startrow;i<=endcol&&count<total;i++)
        {
          ans.push_back(matrix[startrow][i]); 
            count++;
        }
        startrow++;
        for( i=startrow;i<=endrow&&count<total;i++)
        {
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;
        for(i=endcol;i>=startcol&&count<total;i--)
        {
            ans.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;
        
         for(i=endrow;i>=startrow&&count<total;i--)
        {
            ans.push_back(matrix[i][startcol]);
             count++;
        }
        startcol++;
    } 
        return ans;
    }
};