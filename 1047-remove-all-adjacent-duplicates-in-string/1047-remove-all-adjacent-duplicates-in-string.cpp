class Solution {
public:
    string removeDuplicates(string s) {
 stack<char> a;
        string ans;        
        for(int i=0;i<s.length();i++)
        {
             if(a.empty())
               {
                  // cout<< "pushed in stack "<< s[i]<<endl;
                a.push(s[i]);  
               }
            else if(s[i]!=a.top())
               {
                 // cout<< "pushed in stack "<< s[i]<<endl;
                a.push(s[i]);   
               }
               
               else
               a.pop();
        }
        while(!a.empty())
               {
                 ans.push_back(a.top());
                   a.pop();
               }
        int i=0;
               int j=ans.length()-1;
               while(i<j)
               swap(ans[i++],ans[j--]);
               return ans;
    }
};