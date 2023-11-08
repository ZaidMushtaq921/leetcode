class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int maxi=0;
        for(auto it: sentences)
        {   
            int count=1;
            for(auto s: it)
            {
                if(s==' ')
                {
                    count++;
                }
            }
             maxi=max(count,maxi);
        }
        return  maxi;
    }
};