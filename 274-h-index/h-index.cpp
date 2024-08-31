class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count =0;
        sort(citations.begin(),citations.end(),greater<int>());
        for(int i = 0;i<citations.size();i++)
        {
            if(citations[i]>=i+1)
                count++;
            else
            {
                return count;
            }
        }
        return count;
        
    }
};