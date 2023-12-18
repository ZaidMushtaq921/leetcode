class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
            int maxi=INT_MIN;
           int prev=0;
            int next=1;
            while(next!=points.size()-1)
            {
                    maxi=max(maxi,(points[next][0]-points[prev][0]));
                    next++;
                    prev++;        
            }
            return maxi;
    }
};