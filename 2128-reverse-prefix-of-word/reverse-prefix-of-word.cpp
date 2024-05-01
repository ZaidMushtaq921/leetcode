class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        int i=0;
        for( ; i< word.size();i++)
        {
            if(word[i]==ch)
                break;
        }
        if(i==word.size())
            return word;
        while(j<i)
        {
            swap(word[i],word[j]);
            j++;
            i--;
        }
        return word;
        
    }
};