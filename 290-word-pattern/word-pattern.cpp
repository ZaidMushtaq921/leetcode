class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> p_to_s;
        unordered_map<string,char> s_to_p;
        vector<string> words;
        string word;
        istringstream my_stream(s);
        while(my_stream >> word)
        {
            words.push_back(word);
        }
        if(words.size()!=pattern.size())return false;
        for(int i =0;i<pattern.length();i++)
        {
            char  newChar= pattern[i];
            string newWord = words[i];
            if(p_to_s.count(newChar))
            {
                if(p_to_s[newChar]!=newWord) return false;
            }
            else
            {
                p_to_s[newChar]=newWord;
            }
            
            if(s_to_p.count(newWord))
            {
                if(s_to_p[newWord]!=newChar) return false;
            }
            else
            {
               s_to_p[newWord]=newChar;
            }
            
            
            
        }
        return true;
        
    }
};