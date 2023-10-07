class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size()-1;
       int first=0;
       int last=n;
         
        
        
      while(first<=last){
          int ad=first;
          int sb=last;
        while(ad<last) {
        int topleft=matrix[first][ad];
        int topright=matrix[ad][last];
        int bottomleft=matrix[sb][first];
        int bottomright=matrix[last][sb];
       matrix[first][ad]=bottomleft;
       matrix[ad][last]=topleft;
       matrix[sb][first]=bottomright;
       matrix[last][sb]=topright;
        ad++;
        sb--;
       }
        first++;
          last--;
      } 
        
        
    }
};