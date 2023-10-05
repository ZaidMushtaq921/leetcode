class Solution {
public:
    string replaceDigits(string s) {
      string temp = "";
      for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
              int num=(s[i]-'0');
                char n=(s[i-1]+num);   
                temp.push_back(n);
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        return temp;
    }
};