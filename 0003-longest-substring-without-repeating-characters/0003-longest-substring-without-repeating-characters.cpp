class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int i = 0;
        int j = 0;
        int count=0;
        int maxcount=0;
        while(i<s.length())
        {
            if(m[s[i]]<1)
            {
                count++;
               m[s[i]]++;
                if(count>maxcount)
                {
                    maxcount = count;
                }
                i++;
            }
             else 
            {
                  m[s[j]]--;
                 j++;
                 count--;
            }
        }
      return maxcount;
    }
    

};