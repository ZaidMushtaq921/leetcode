class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=col-1;
        while(start<row&&end>=0)
        {
            int e=matrix[start][end];
            if(e==target)
                return true;
            else if(target>e)
                start++;
        else
            end--;
        }
        return false;
        
    }
};