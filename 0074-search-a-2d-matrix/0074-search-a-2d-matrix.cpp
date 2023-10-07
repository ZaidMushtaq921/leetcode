class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=row*col -1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int midrow= mid/col;
            int midcol=mid%col;
            if(matrix[midrow][midcol]==target)
            {
                return true;
            }
            else if(matrix[midrow][midcol]>target)
            {
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return false;
        
    }
};