class Solution {
public:
    string removeStars(string s) {
        string output="";
        stack<char> stk;
        for(int i = s.length()-1;i>=0;i--){
         
                if(!stk.empty() && stk.top()=='*'&&s[i]!='*')
                {
                    stk.pop();
                    continue;
                }
            else{
                stk.push(s[i]);
            }   
        }
        while(!stk.empty())
        {
            output+=stk.top();
            stk.pop();
        }
        return output;
    }
};