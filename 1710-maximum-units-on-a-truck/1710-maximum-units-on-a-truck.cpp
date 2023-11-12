class Solution {
    private:
    static bool comp(vector<int> a,vector<int> b)
    {
        return a[1]>b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
      sort(boxTypes.begin(),boxTypes.end(),comp);  
        int result=0;
        int i=0;
        while(truckSize!=0 && i<boxTypes.size())
        {
            if(truckSize>boxTypes[i][0])
            {
                result+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else
            {
              result+=(truckSize*boxTypes[i][1]);
               truckSize=0;
            } 
            i++;
        }
      return result;  
        
    }
};