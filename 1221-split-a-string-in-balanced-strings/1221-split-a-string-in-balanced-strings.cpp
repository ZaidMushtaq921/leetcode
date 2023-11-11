class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0;
        int countl=0;
        int result=0;
        for(auto it:s)
        {
            if(it=='R')
            {
                countr++;
            }
            else
            {
                countl++;
            }
            if(countr==countl)
            {
                result++;
                countl=0;
                countr=0;
            }
        }
        
        return result;
        
    }
};