class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0;
        int j=s.length();
        vector<int> result;
        for(auto it: s)
        {
            if(it=='I')
            {
                result.push_back(i);
                i++;
            }
            else
            {
               result.push_back(j);
                j--; 
            }    
        }
            result.push_back(i);
        return result;
    }
};