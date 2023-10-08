class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       
        if(words.size()!=s.size())
            return false;
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(words[i][0]!=s[i]||words[j][0]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};