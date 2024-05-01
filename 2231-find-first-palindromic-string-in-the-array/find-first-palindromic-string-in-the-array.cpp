class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string firstPalendrome ="";
        for(string s:words)
        {
            string rev=s;
                reverse(s.begin(),s.end());
            if(rev==s)
            {
                firstPalendrome = s;
                break;
            }
        }
        return firstPalendrome;
    }
};