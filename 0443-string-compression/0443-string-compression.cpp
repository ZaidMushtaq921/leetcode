class Solution {
public:
    int compress(vector<char>& chars) {
    int n=chars.size();
        int index=0;
        int i=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n&&chars[j]==chars[i])
            {
                j++;
            }
            int count=j-i;
            chars[index++]=chars[i];
            if(count>1)
            {
                string ch=to_string(count);
                for(auto c:ch)
                {
                    chars[index++]=c;
                }
            }
            i=j;
        }
        return index;
    }
};