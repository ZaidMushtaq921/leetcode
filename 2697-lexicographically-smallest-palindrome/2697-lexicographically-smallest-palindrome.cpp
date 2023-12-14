class Solution
{
    public:
        string makeSmallestPalindrome(string s)
        {
            int i = 0;
            int j = s.size() - 1;
            while (i < j)
            {
                    
                if (s[i] - 'a'<s[j] - 'a')
                {
                    s[j] = s[i];
                }
                else if(s[i] - 'a' > s[j] - 'a')
                {
                    s[i] = s[j];
                }
                    i++;
                    j--;
            }
                return s;
        }
};