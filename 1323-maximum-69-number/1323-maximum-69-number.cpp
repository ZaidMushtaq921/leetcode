class Solution {
public:
    int maximum69Number (int num) {
     
        string s= to_string(num);
        int count=0;
        for(int i=0;i<s.length();i++)
        {  
            if(s[i]=='6' && count==0)
            {
                s[i]='9';
                count=1;
            }
        }
        return stoi(s);
        
    }
};