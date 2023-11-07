class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int rows=mat.size();
        int col=mat[0].size();
         priority_queue<int, vector<int>,greater<int>> q; 
        for(int k=0;k<rows;k++)
        {
            int i=k;
            int j=0;
            while(i<rows&&j<col)
            {
                q.push(mat[i][j]);
                i++;
                j++;
            }
                i=k;
                j=0;
            while(i<rows&&j<col)
            {
                mat[i][j]=q.top();
                i++;
                j++;
                q.pop();
            }
        }
        
            for(int k=1;k<col;k++)
        {
            int i=0;
            int j=k;
            while(i<rows&&j<col)
            {
                q.push(mat[i][j]);
                i++;
                j++;
            }
                i=0;
                j=k;
            while(i<rows&&j<col)
            {
                mat[i][j]=q.top();
                i++;
                j++;
                q.pop();
            }
        }
       return mat; 
    }
};