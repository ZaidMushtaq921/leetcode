class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end(),greater<int>());
            sort(tasks.begin(),tasks.end());
            int maxi=INT_MIN;
            for(int i=0;i<processorTime.size();i++)
            {
                    int x= i+ 3*(i+1);
                    maxi=max((tasks[x]+processorTime[i]),maxi);
            }
            
            return maxi;
    }
};