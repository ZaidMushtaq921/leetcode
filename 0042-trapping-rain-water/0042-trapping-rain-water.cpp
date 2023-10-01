class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int dif=0;
        int sum=0;
        for(int i=1;i<height.size();i++)
        {
            while(height[l]<=height[i])
            {
                  l=i;
                i++;
                if(i>=height.size())
                    break;
              
            }
                if(i>=height.size())
                    break;
            dif=height[l]-height[i];
            sum+=dif;
        }
        int m=height.size()-1;
        for(int i=height.size()-1;i>l;i--)
        {
            if(height[i]>height[m])
            {
                m=i;
            }
            dif=height[l]-height[m];
            sum=sum-dif;
        }
        
        
        return sum;
        
        
    }
};