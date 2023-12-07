class Solution {
public:
    string largestOddNumber(string num) {
       string result="";
            string ans="";
            for(int i=0;i<num.size();i++)
            {
                    int n = num[i]-'0';
                    ans+=num[i];
                    if(n%2!=0)
                    {
                           result=ans; 
                            
                    }                 
            }
             
           return result; 
    }
};