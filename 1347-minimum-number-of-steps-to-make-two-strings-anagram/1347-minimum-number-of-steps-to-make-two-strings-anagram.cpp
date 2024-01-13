class Solution {
public:
    int minSteps(string s, string t) {
            int count=0;
     vector<int> m(26,0);
            
            for(int i=0;i<s.size();i++)
            {
                    
                    m[s[i]-97]--;
                    m[t[i]-97]++;       
            }
            for(int i=0;i<26;i++)
            {
                    if(m[i]>0)
                            count+=m[i];
            }
            return count;
        
    }
};