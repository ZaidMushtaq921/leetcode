class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int c=capacity;
        int sum=0;
       for(int i=0;i<plants.size();i++)
       {
           if(c>=plants[i])
           {
               sum+=1;
               c-=plants[i];
           }
           else
           {
               sum+=(i*2)+1;
               c=capacity;
                c-=plants[i];   
           }
       }
        return sum;
        
        
        
    }
};