class Solution {
public:
    int maxDistance(vector<int>& colors) {
     int maxi= INT_MIN;
     for(int i=0;i<colors.size();i++)
     {
         for(int j=0;j<colors.size();j++)
         {
             if( (colors[i]!=colors[j]) && abs(i-j)>maxi)
             {
                 maxi=abs(i-j);
             }
         }
        
     }
         return maxi;
    }
};