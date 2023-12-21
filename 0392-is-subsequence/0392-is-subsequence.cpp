class Solution {
public:
    bool isSubsequence(string s, string t) {
            int size =  s.size();
            int i=0;
        for(auto it: t)
        {
                if(it==s[i])
                {
                        i++;
                }
        }
            if(i==size)
                    return true;
            return false;
    }
};