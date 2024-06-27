class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size()-1;
        int result = 0;
        for(int i=0;i<=size;i++)
        {
            result+=(mat[i][i]+mat[i][size-i]);
                if(i==size-i)
                    result-=mat[i][i];
        }
        return result;
    }
};