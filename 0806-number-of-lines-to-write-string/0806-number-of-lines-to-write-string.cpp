class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result(2,0);
        result[0]=1;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
           int  index=s[i]-'a';
            int n=widths[index];
            if(sum+n<=100)
                sum+=n;
            else
            {
                sum=0;
                result[0]++;
                i--;
            }
        }
        result[1]=sum;
        return result;
        
        
        
        
    }
};