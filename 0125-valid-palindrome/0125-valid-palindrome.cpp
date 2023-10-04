class Solution {
    private:
      char isupper(char ch)
      {
          if(ch>='A'&&ch<='Z')
          {
              return ch-'A'+'a';
          }
          return ch;
      }
    bool comp(string str)
    {
        for(int i=0,j=str.size()-1;i<=j;i++,j--)
        {
            if(str[i]!=str[j])
                return false;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        
        string str;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            {
            str.push_back(isupper(s[i]));    
             }
        }
        return comp(str);
    }
};