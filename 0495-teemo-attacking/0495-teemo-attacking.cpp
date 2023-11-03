class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
      
        int count=0;
        for(int i=0;i<timeSeries.size();i++)
        {
            
            if(i+1<timeSeries.size() && timeSeries[i+1]-timeSeries[i]>duration)
            {
                count+=duration;
            }
            else if(i+1<timeSeries.size())
            {
                count+=timeSeries[i+1]-timeSeries[i];
            }       
        }
        
        
        return count+duration;
    }
};