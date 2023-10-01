class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
     int   l = height.size()-1;
        int ans=0;
        int water =0;
        
        while(s<l)
        {
            if(height[s]>height[l])
            {
                water=height[l]*(l-s);
                l--;
            }
            else
            {
                water=height[s]*(l-s);
                s++;
            }
            if(ans<water)
            {
                ans=water;
            }
        }
        return ans;
        
    }
};